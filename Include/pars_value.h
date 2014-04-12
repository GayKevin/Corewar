/*
** pars_value.h for pars_value in /home/limone_m/rendu/CPE_2014_corewar
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Sat Apr 12 11:44:31 2014 Maxime Limone
** Last update Sat Apr 12 12:03:57 2014 Maxime Limone
*/

#ifndef PARS_H_
# define PARS_H_

int		check_value(t_pars *s, op_t *t, int i, int n);
int		nbr_param(t_pars *s, op_t *t, int i);
int		pars_param_diff(t_pars *s, op_t *t, int i);
int		pars_value(t_pars *s, op_t *t, int i);

#endif /* PARS_H_ */
