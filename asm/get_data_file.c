/*
** get_data_file.c for get_data_file in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Mon Mar 24 16:18:26 2014 Maxime Limone
** Last update Thu Apr  3 15:11:31 2014 Maxime Limone
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include "asm.h"
#include "asm_get_data_file.h"
#include "put_infile_tool.h"
#include "tool.h"
#include "op.h"

int		get_name(t_pars *s, header_t *o)
{
  int		n;
  int		i;

  n = 0;
  i = 0;
  while (s->line[i] != '\"' && i < s->size_line)
    i++;
  if (i++ == s->size_line)
    {
      my_err("Syntax error on prog name, missing ‘\"’", s);
      return (-3);
    }
  else
    {
      while (s->line[i] != '\"' && i < s->size_line)
	o->prog_name[n++] = s->line[i++];
      if (s->line[i] != '\"')
	{
	  my_err("Syntax error on prog name, missing ‘\"’", s);
	  return (-3);
	}
      while (n != PROG_NAME_LENGTH+1)
	o->prog_name[n++] = '\0';
    }
  return (0);
}

int		get_comment(t_pars *s, header_t *o)
{
  int		n;
  int		i;

  n = 0;
  i = 0;
  while (s->line[i] != '\"' && i < s->size_line)
    i++;
  if (i++ == s->size_line)
    {
      my_err("Syntax error on prog comment, missing ‘\"’", s);
      return (-3);
    }
  else
    {
      while (s->line[i] != '\"' && i < s->size_line)
        o->comment[n++] = s->line[i++];
      if (s->line[i] != '\"')
        {
	  my_err("Syntax error on prog comment, missing ‘\"’", s);
          return (-3);
        }
      while (n != COMMENT_LENGTH+1)
	o->comment[n++] = '\0';
    }
  return (0);
}

char		*new_name_cor(char *s_name)
{
  char		*cor;
  char		*cor_name;
  int		i;

  cor = ".cor";
  i = -1;
  if ((cor_name = malloc(sizeof(*s_name) + 5)) == NULL)
    return (NULL);
  while (s_name[++i] != '.')
    cor_name[i] = s_name[i];
  cor_name = my_strcat(cor_name, cor);
  return (cor_name);
}

int		invert_endian(int nb)
{
  int		new_endian_nb;

  new_endian_nb = ((nb >> 24) & 0xff) | ((nb << 8) & 0xff0000)
    | ((nb >> 8) & 0xff00) | ((nb << 24) & 0xff000000);
  return (new_endian_nb);
}

int		print_in_file(t_pars *s, header_t *o)
{
  int	fd;

  if ((fd = open(new_name_cor(s->champ_name)
		 , O_CREAT | O_RDWR, S_IRWXU)) == -1)
    {
      my_putstr("\e[1;31mError: failed to create file [.cor]\e[0m\n");
      return (-2);
    }
  my_putnbr_infile(invert_endian((o->magic = 0xea83f3)), fd);
  my_putstr_infile(o->prog_name, fd, PROG_NAME_LENGTH);
  my_putnbr_infile(invert_endian(0x04), fd);
  my_putstr_infile(o->comment, fd, COMMENT_LENGTH);
  close(fd);
  return (0);
}
