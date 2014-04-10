/*
** init_value_asm.c for init_value_asm in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Apr  8 18:18:59 2014 Maxime Limone
** Last update Thu Apr 10 11:38:16 2014 Maxime Limone
*/

#include <stdlib.h>
#include "asm.h"

int		init_param_type(t_pars *s)
{
  if ((s->param_type = malloc(sizeof(char) * 9)) == NULL)
    return (-1);
  if ((s->tab_param = malloc(sizeof(int) * 9)) == NULL)
    return (-1);
  s->param_type[0] = 'r';
  s->param_type[1] = DIRECT_CHAR;
  s->param_type[2] = -1;
  s->param_type[3] = 1;
  s->param_type[4] = 2;
  s->param_type[5] = 3;
  s->param_type[6] = T_REG;
  s->param_type[7] = T_DIR;
  s->param_type[8] = T_IND;
  s->param_type[9] = '\0';
  return (0);
}

int		init_tab_idx(t_pars *s)
{
  if ((s->tab_idx = malloc(sizeof(int) * 12)) == NULL)
    return (-1);
  s->tab_idx[0] = 9;
  s->tab_idx[1] = 10;
  s->tab_idx[2] = 11;
  s->tab_idx[3] = 12;
  s->tab_idx[4] = 14;
  s->tab_idx[5] = 15;
  s->tab_idx[6] = 1;
  s->tab_idx[7] = 12;
  s->tab_idx[8] = 23;
  s->tab_idx[9] = 1;
  s->tab_idx[10] = 12;
  s->tab_idx[11] = 1;
  s->tab_idx[12] = 0;
  return (0);
}
