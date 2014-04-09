/*
** init_value_asm.c for init_value_asm in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Apr  8 18:18:59 2014 Maxime Limone
** Last update Wed Apr  9 18:40:25 2014 Maxime Limone
*/

#include <stdlib.h>
#include "asm.h"

int		init_param_type(t_pars *s)
{
  if ((s->param_type = malloc(sizeof(char) * 6)) == NULL)
    return (-1);
  s->param_type[0] = '%';
  s->param_type[1] = 'r';
  s->param_type[2] = -1;
  s->param_type[3] = 1;
  s->param_type[4] = 2;
  s->param_type[5] = 3;
  s->param_type[6] = '\0';
  return (0);
}
