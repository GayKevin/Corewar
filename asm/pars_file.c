/*
** pars_file.c for pars_file in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 19 19:23:38 2014 Maxime Limone
** Last update Wed Apr  9 18:40:54 2014 Maxime Limone
*/

#include <stdlib.h>
#include <unistd.h>
#include "asm.h"
#include "asm_get_data_file.h"
#include "asm_init_tab.h"
#include "get_next_line.h"
#include "my_strcmp.h"
#include "tool.h"
#include "op.h"

int		pars_file_line(t_pars *s)
{
  header_t	o;
  op_t		t;

  s->nb_line = 1;
  init_param_type(s);
  s->wrt_inst_str = malloc(sizeof(char) * 500);
  while ((s->line = get_next_line(s->fd)))
    {
      s->size_line = my_strlen(s->line);
      if (s->line[0] == COMMENT_CHAR);
      else if (s->line[0] == '.')
	{
	  if (pars_header(s, &o) == -3)
	    return (-3);
	}
      else
	pars_inst(s, &t);
      s->nb_line++;
    }
  print_in_file(s, &o);
  return (0);
}

int		pars_header(t_pars *s, header_t *o)
{
  if (my_strncmp(s->line, NAME_CMD_STRING, 5) == 0)
    {
      if (get_name(s, o) == -3)
	return (-3);
    }
  else if (my_strncmp(s->line, COMMENT_CMD_STRING, 8) == 0)
    {
      if (get_comment(s, o) == -3)
	return (-3);
    }
  else
    {
      my_err("Syntax: Usage \".[name/comment] \"prog [name/comment]\"\"", s);
      return (-3);
    }
  return (0);
}

int		pars_inst(t_pars *s, op_t *t)
{
  int		i;

  i = 0;
  if (s->line[i] == '\n')
    return (0);
  s->tab_file_str = str_to_wordtab(epur_str(s->line));
  if (s->tab_file_str[0][my_strlen(s->tab_file_str[0]) - 1] == LABEL_CHAR)
    my_putstr("label\n");
  i = -1;
  while (op_tab[++i].mnemonique != NULL
	 && (my_strcmp(s->tab_file_str[0], op_tab[i].mnemonique) != 0));
  if (op_tab[i].mnemonique == NULL)
    my_err("invalid instruction", s);
  else
    {
      if (realloc(s->wrt_inst_str, 5) == NULL)
	return (-1);
      s->wrt_inst_str[0] = op_tab[i].code;
    }
  if (pars_param(s, t, i) != 0)
    return (-1);
  return (0);
}

int		pars_param(t_pars *s, op_t *t, int i)
{
  char		*tmp_s;
  int		tmp_i;
  int		c;
  int		f;

  if ((tmp_s = malloc(sizeof(char) * my_strlen(s->tab_file_str[1]))) == NULL)
    return (-1);
  tmp_s = clean_str(tmp_s, my_strlen(s->tab_file_str[1]));
  tmp_i = -1;
  c = -1;
  f = -1;
  if (op_tab[i].nbr_args > 1)
    {
      while (s->tab_file_str[1][++f] != '\0')
	{
	  //my_putchar
	  while (++c < 3 && s->tab_file_str[1][f] != s->param_type[c]);
	  while (s->tab_file_str[1][++f] != ',' && s->tab_file_str[1][f] != '\0')
	    tmp_s[++tmp_i] = s->tab_file_str[1][f];
	  tmp_s[++tmp_i] = '\0';
	  my_putstr(tmp_s);
	  //  check_param(s->param_type[c]);
	}
    }
  my_putstr(s->wrt_inst_str);
  return (0);
}
