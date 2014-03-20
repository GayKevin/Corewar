/*
** point_function_option.c for pointer in /home/gay_k/rendu/Corewar/corewar
**
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
**
** Started on  Thu Mar 20 11:12:20 2014 Kevin Gay
** Last update Thu Mar 20 15:54:26 2014 Kevin Gay
*/

#include <unistd.h>
#include <stdlib.h>
#include "corewar.h"

flag	*tab_function_pro_name(flag *tab_function_pro_name)
{
  if ((tab_function_pro_name = malloc(sizeof(flag) * 4)) == NULL)
    return (NULL);
  tab_function_pro_name[1] = pro_name_1;
  tab_function_pro_name[2] = pro_name_2;
  tab_function_pro_name[3] = pro_name_3;
  tab_function_pro_name[4] = pro_name_4;
  return (tab_function_pro_name);
}

flag	*tab_function_pro_add(flag *tab_function_pro_add)
{
  if ((tab_function_pro_add = malloc(sizeof(flag) * 4)) == NULL)
    return (NULL);
  tab_function_pro_add[1] = pro_add_1;
  tab_function_pro_add[2] = pro_add_2;
  tab_function_pro_add[3] = pro_add_3;
  tab_function_pro_add[4] = pro_add_4;
  return (tab_function_pro_add);
}

flag	*tab_function_pro_nbr(flag *tab_function_pro_nbr)
{
  if ((tab_function_pro_nbr = malloc(sizeof(flag) * 4)) == NULL)
    return (NULL);
  tab_function_pro_nbr[1] = pro_nbr_1;
  tab_function_pro_nbr[2] = pro_nbr_2;
  tab_function_pro_nbr[3] = pro_nbr_3;
  tab_function_pro_nbr[4] = pro_nbr_4;
  return (tab_function_pro_nbr);
}

