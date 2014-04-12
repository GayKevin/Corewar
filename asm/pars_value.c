/*
** pars_value.c for pars_value in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Thu Apr 10 12:52:41 2014 Maxime Limone
** Last update Sat Apr 12 12:06:04 2014 Maxime Limone
*/

#include "asm.h"
#include "op.h"
#include "tool.h"
#include "pars_value.h"

int		pars_param_diff(t_pars *s, op_t *t, int i)
{
  if (op_tab[i].nbr_args > 1)
    {
      if (pars_param(s, t, i) != 0)
	return (-1);
    }
  else
    {
      if (pars_value(s, t, i) != 0)
	return (-1);
    }
  return (0);
}

int		nbr_param(t_pars *s, op_t *t, int i)
{
  int		c;

  c = -1;
  while (++c < 3 && s->tab_param[c] != 0);
  return (c);
}

int		pars_value(t_pars *s, op_t *t, int i)
{
  int		n;

  n = nbr_param(s, t, i);
  if (n != op_tab[i].nbr_args)
    {
      my_err("wrong argument number for this instruction", s);
      return (-1);
    }
  n = -1;
  while (op_tab[i].type[++n])
    {
      if (check_value(s, t, i, n) != 0)
	return (-1);
    }
  //check_
  return (0);
}

int		check_value(t_pars *s, op_t *t, int i, int n)
{
  int           np;
  int           p;

  s->max = 5;
  p = 0;
  np = -1;
  while (++np < 8 && op_tab[i].type[n] != s->type_p[np][0]);
  if (np == 4 || np == 5 || np == 6)
    {
      if (s->tab_param[n] != s->type_p[np][p])
	{
	  my_err("invalid argument type", s);
	  return (-1);
	}
    }
  else
    {
      while (++p < s->max && s->tab_param[n] != s->type_p[np][p]);
      if (p == 5)
	{
	  my_err("invalid argument type", s);
	  return (-1);
	}
    }
  return (0);
}
