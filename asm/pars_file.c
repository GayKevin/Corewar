/*
** pars_file.c for pars_file in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 19 19:23:38 2014 Maxime Limone
** Last update Thu Apr  3 14:15:38 2014 Maxime Limone
*/

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

  s->nb_line = 1;
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
	pars_inst(s, &o);
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
      my_err("Syntax error: Usage \".[name/comment] \"prog [name/comment]\"\"", s);
      return (-3);
    }
  return (0);
}

int		pars_inst(t_pars *s, header_t *o)
{
  int		i;

  i = 0;
  if (s->line[i] == '\n')
    return (0);
  s->tab_inst_str = init_tab_inst_str(s->tab_inst_str);
  s->tab_inst_char = init_tab_inst_char(s->tab_inst_char);
  s->tab_file_str = str_to_wordtab(epur_str(s->line));
  i = 0;
  if (s->tab_file_str[0][my_strlen(s->tab_file_str[0]) - 1] == ':')
    my_putstr("lable\n");
  return (0);
}
