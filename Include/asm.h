/*
** asm.h for asm in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 20:02:24 2014 Maxime Limone
** Last update Thu Apr 10 13:29:56 2014 Maxime Limone
*/

#ifndef ASM_H_
# define ASM_H_
# include "op.h"

typedef struct	s_pars
{
  char		**tab_file_str;
  char		*champ_name;
  char		*line;
  char		*param_type;
  char		*tmp_s;
  char		*wrt_inst_str;
  char		oc_codage;
  int		*tab_idx;
  int		*tab_param;
  int		fd;
  int		g_wrt;
  int		nb_line;
  int		size_line;
  int		tmp_i;
}		t_pars;

int		check_file_name(char *file);
int		init_param_type(t_pars *s);
int		pars_file_line(t_pars *s);
int		pars_header(t_pars *s, header_t *o);
int		pars_inst(t_pars *s, op_t *t);
int		pars_param(t_pars *s, op_t *t, int i);
int		pars_value(t_pars *s, op_t *t, int i);
int		sw_occd(t_pars *s, op_t *t, int i);
void		my_err(char *message_err, t_pars *s);

#endif /*ASM_H_*/
