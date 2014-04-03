/*
** main.c for main in /home/limone_m/rendu/CPE_2014_corewar/corewar
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:20:48 2014 Maxime Limone
** Last update Wed Apr  2 16:58:05 2014 Kevin Gay
*/


#include <stdlib.h>
#include "op.h"
#include "corewar.h"

int		main(int ac, char **av)
{
  t_core	co;
  header_t	hd;

  if (ac < 2)
    {
      my_putstr("You must put at least one champion ./corewar 42.cor\n");
      return (0);
    }
  if (find_option_dump(av, &co) == 1)
    return (1);
  if (find_option_program(av, &co, &hd) == 1)
    {
      free_war(&co);
      return (1);
    }
  free_war(&co);
  return (0);
}
