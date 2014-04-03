/*
** gere_err.c for gere_err in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 17:06:04 2014 Maxime Limone
** Last update Thu Apr  3 15:11:54 2014 Maxime Limone
*/

#include <stdlib.h>
#include "asm.h"
#include "tool.h"

int		check_file_name(char *file)
{
  int	i;

  i = my_strlen(file) - 1;
  if (file[i] != 's' && file[i - 1] != '.')
    return (-2);
  return (0);
}

void		my_err(char *message_err, t_pars *s)
{
  my_putstr("\e[1;31mError: ");
  my_putstr(s->champ_name);
  my_putstr(": ");
  my_putstr("line ");
  my_putnbr(s->nb_line);
  my_putstr(": ");
  my_putstr(message_err);
  my_putstr("\e[0m\n");
}
