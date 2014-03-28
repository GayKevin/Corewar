/*
** pointer_function_pro_nbr.c for pro nbr in /home/gay_k/rendu/Corewar
**
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
**
** Started on  Thu Mar 20 11:28:43 2014 Kevin Gay
** Last update Fri Mar 28 12:03:13 2014 Kevin Gay
*/

#include "corewar.h"

int	pro_nbr_1(char *av, t_core *co, int p)
{
  co->pn1 = my_getnbr(av);
  return (0);
}

int	pro_nbr_2(char *av, t_core *co, int p)
{
  co->pn2 = my_getnbr(av);
  if (co->pn2 == co->pn1)
    {
      my_putstr("Champion 2 has the same number than the champion 1\n");
      return (1);
    }
  return (0);
}

int	pro_nbr_3(char *av, t_core *co, int p)
{
  co->pn3 = my_getnbr(av);
  if (co->pn3 == co->pn2)
    {
      my_putstr("Champion 3 has the same number than the champion 2\n");
      return (1);
    }
  else if (co->pn3 == co->pn1)
    {
      my_putstr("Champion 3 has the same number than the champion 1\n");
      return (1);
    }
  return (0);
}

int	pro_nbr_4(char *av, t_core *co, int p)
{
  co->pn4 = my_getnbr(av);
  if (co->pn4 == co->pn3)
    {
      my_putstr("Champion 4 has the same number than the champion 3\n");
      return (1);
    }
  else if (co->pn3 == co->pn2)
    {
      my_putstr("Champion 4 has the same number than the champion 2\n");
      return (1);
    }
  else if (co->pn3 == co->pn1)
    {
      my_putstr("Champion 4 has the same number than the champion 1\n");
      return (1);
    }
  return (0);
}
