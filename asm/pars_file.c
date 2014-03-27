/*
** pars_file.c for pars_file in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 19 19:23:38 2014 Maxime Limone
** Last update Wed Mar 26 21:20:15 2014 Maxime Limone
*/

#include "asm.h"
#include "asm_get_data_file.h"
#include "get_next_line.h"
#include "my_strcmp.h"
#include "tool.h"
#include "op.h"

int		pars_file_line(t_pars *s)
{
  header_t	o;
  int		i;

  i = 0;
  while ((s->line = get_next_line(s->fd)))
    {
      s->size_line = my_strlen(s->line);
      if (s->line[0] == '.')
	{
	  if (my_strncmp(s->line, NAME_CMD_STRING, 5) == 0)
	    if (get_name(s, &o) == -3)
	      return (-3);
	  else if (my_strncmp(s->line, COMMENT_CMD_STRING, 8) == 0)
	    if (get_comment(s, &o) == -3)
	      return (-3);
	  else
	    {
	      my_err("invalid syntax expected ‘.’", s);
	      return (-3);
	    }
	}
    }
  print_in_file(s, &o);
}
