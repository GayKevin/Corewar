/*
** pars_file.c for pars_file in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 19 19:23:38 2014 Maxime Limone
** Last update Wed Mar 19 20:49:55 2014 Maxime Limone
*/

#include "asm.h"
#include "get_next_line.h"

void		pars_file_line(t_pars *s)
{
  int	i;

  i = 0;
  while (get_next_line(s->fd));
}
