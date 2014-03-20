/*
** pointer_function_add.c for pointer in /home/gay_k/rendu/Corewar/corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Thu Mar 20 11:17:33 2014 Kevin Gay
** Last update Thu Mar 20 15:00:02 2014 Kevin Gay
*/

#include "corewar.h"
#include "op.h"

int	pro_add_1(char *av, t_core *co, int p)
{
   co->pa1 = my_getnbr(av) % MEM_SIZE;
   return (0);
}

int	pro_add_2(char *av, t_core *co, int p)
{
  co->pa2 = my_getnbr(av) % MEM_SIZE;
  return (0);
}

int	pro_add_3(char *av, t_core *co, int p)
{
  co->pa3 = my_getnbr(av) % MEM_SIZE;
  return (0);
}

int	pro_add_4(char *av, t_core *co, int p)
{
  co->pa4 = my_getnbr(av) % MEM_SIZE;
  return (0);
}
