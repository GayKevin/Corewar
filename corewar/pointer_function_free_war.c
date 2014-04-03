/*
** pointer_function_free_war.c for free in /home/gay_k/rendu/CPE_2014_corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Apr  2 16:26:30 2014 Kevin Gay
** Last update Thu Apr  3 14:23:45 2014 Kevin Gay
*/

#include <stdlib.h>
#include "corewar.h"
#include "op.h"

void	free_war1(t_core *co)
{
  /* my_free_tab(co->war1, 15); */
  int	i;

  i = 0;
  while (i != 15 )
    free(co->war1[i++]);
  free(co->war1);
}

void	free_war2(t_core *co)
{
  my_free_tab(co->war2, 15);
}

void	free_war3(t_core *co)
{
  my_free_tab(co->war3, 15);
}

void	free_war4(t_core *co)
{
  my_free_tab(co->war4, 15);
}

