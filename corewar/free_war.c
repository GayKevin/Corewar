/*
** free_war.c for free_war in /home/gay_k/rendu/CPE_2014_corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Apr  2 16:20:58 2014 Kevin Gay
** Last update Thu Apr  3 13:54:05 2014 Kevin Gay
*/

#include "corewar.h"

void	tab_function_free_war(void (*tab_func[5])(t_core *co))
{
  tab_func[1] = &free_war1;
  tab_func[2] = &free_war2;
  tab_func[3] = &free_war3;
  tab_func[4] = &free_war4;
}

void	free_war(t_core *co)
{
  int	i;
  void	(*tab_func[5])(t_core *co);

  i = 0;
  tab_function_free_war(tab_func);
  while (i != co->p)
    tab_func[++i](co);
}

