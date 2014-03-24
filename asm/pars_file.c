/*
** pars_file.c for pars_file in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 19 19:23:38 2014 Maxime Limone
** Last update Mon Mar 24 16:00:13 2014 Maxime Limone
*/

#include "op.h"
#include "asm.h"
#include "tool.h"
#include "get_next_line.h"

int		pars_file_line(t_pars *s)
{
  int	i;

  i = 0;
  while ((s->line = get_next_line(s->fd)))
    {
      if (s->line[0] == '.')
	{
	  if (my_strncmp(s->line, NAME_CMD_STRING, 5) == 0)
	    get_name(s->line);
	  else if (my_strncmp(s->line, COMMENT_CMD_STRING, 8) == 0)
	    get_comment(s->line);
	  else
	    {
	      my_putstr("\e[1;31mError: Invalid syntax in");
	      my_putstr(s->champ_name);
	      my_putstr("expected ‘.’");
	      return (-3);
	    }
	}
    }
}
