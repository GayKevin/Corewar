/*
** pointer_function_name_pro.c for prog name in /home/gay_k/rendu/Corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Thu Mar 20 10:32:16 2014 Kevin Gay
** Last update Thu Mar 20 11:18:35 2014 Kevin Gay
*/

#include <stdlib.h>
#include "corewar.h"

void	pro_name_1(char *av, t_core *co, int p)
{
  co->p1 = malloc(sizeof(char) * my_strlen(av));
  co->p1 = my_strcpy_name(co->p1, av);
}

void	pro_name_2(char *av, t_core *co, int p)
{
  co->p2 = malloc(sizeof(char) * my_strlen(av));
  co->p2 = my_strcpy_name(co->p2, av);
}

void	pro_name_3(char *av, t_core *co, int p)
{
  co->p3 = malloc(sizeof(char) * my_strlen(av));
  co->p3 = my_strcpy_name(co->p3, av);
}

void	pro_name_4(char *av, t_core *co, int p)
{
  co->p4 = malloc(sizeof(char) * my_strlen(av));
  co->p4 = my_strcpy_name(co->p4, av);
}
