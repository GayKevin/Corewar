/*
** pointer_function_pro_nbr.c for pro nbr in /home/gay_k/rendu/Corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Thu Mar 20 11:28:43 2014 Kevin Gay
** Last update Thu Mar 20 11:33:07 2014 Kevin Gay
*/

#include "corewar.h"

void	pro_nbr_1(char *av, t_core *co, int p)
{
  co->pn1 = my_getnbr(av);
}
void	pro_nbr_2(char *av, t_core *co, int p)
{
  co->pn2 = my_getnbr(av);
}
void	pro_nbr_3(char *av, t_core *co, int p)
{
  co->pn3 = my_getnbr(av);
}
void	pro_nbr_4(char *av, t_core *co, int p)
{
  co->pn4 = my_getnbr(av);
}
