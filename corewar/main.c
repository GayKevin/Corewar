/*
** main.c for main in /home/limone_m/rendu/CPE_2014_corewar/corewar
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:20:48 2014 Maxime Limone
** Last update Fri Mar 21 17:11:53 2014 Kevin Gay
*/


#include <stdlib.h>
#include "op.h"
#include "corewar.h"

int		main(int ac, char **av)
{
  t_core	co;
  header_t	hd;

  if (ac < 1)
    return (0);
  if (find_option_dump(av, &co) == 1)
    return (1);
  if (find_option_program(av, &co, &hd) == 1)
    return (1);
  return (0);
}
