/*
** dump.c for dump in /home/gay_k/rendu/Corewar/corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Tue Mar 18 21:46:15 2014 Kevin Gay
** Last update Tue Mar 18 22:09:24 2014 Kevin Gay
*/

#include <stdlib.h>
#include "corewar.h"

int	dump_found(char *av)
{
  int	i;

  i = -1;
  while (av[++i] != '\0')
    if (av[i] < 48 || av[i] > 57)
      {
	my_putstr("It must be a number after -dump\n");
	return (1);
      }
  my_getnbr(av);
  return (0);
}


int	find_option_dump(char **av)
{
  int	i;

  i = -1;
  while (av[++i] != NULL)
      if (my_strcmp(av[i], "-dump") == 0)
	if (dump_found(av[i + 1]) == 1)
	  return (1);
  return (0);
}
