/*
** main.c for main in /home/limone_m/rendu/CPE_2014_corewar/corewar
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:20:48 2014 Maxime Limone
** Last update Tue Mar 18 22:09:59 2014 Kevin Gay
*/

#include "corewar.h"

int		main(int ac, char **av)
{
  if (ac < 1)
    return (0);
  if (find_option_dump(av) == 1)
    return (1);
  return (0);
}
