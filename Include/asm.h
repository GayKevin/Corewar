/*
** asm.h for asm in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 20:02:24 2014 Maxime Limone
** Last update Sat Apr 12 12:24:57 2014 Maxime Limone
*/

#ifndef ASM_H_
# define ASM_H_
# include "op.h"
# define CHKNB (s->tab_file_str[1][s->f] >= '0'&& s->tab_file_str[1][s->f] <= '9')

typedef struct	s_pars
{
  char		**tab_file_str;
  char		*champ_name;
  char		*line;
  char		*param_type;
  char		*tmp_s;
  char		*wrt_inst_str;
  char		oc_codage;
  int		**type_p;
  int		*tab_idx;
  int		*tab_param;
  int		f;
  int		fd;
  int		g_wrt;
  int		max;
  int		nb_line;
  int		size_line;
  int		tb;
  int		tmp_i;
}		t_pars;

int		check_file_name(char *file);
int		pars_file_line(t_pars *s);
int		pars_header(t_pars *s, header_t *o);
int		pars_inst(t_pars *s, op_t *t);
int		pars_param(t_pars *s, op_t *t, int i);
int		sw_occd(t_pars *s, op_t *t, int i);
void		my_err(char *message_err, t_pars *s);

#endif /*ASM_H_*/
