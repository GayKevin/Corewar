/*
** asm.h for asm in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 20:02:24 2014 Maxime Limone
** Last update Thu Apr  3 11:10:15 2014 Maxime Limone
*/

#ifndef ASM_H_
# define ASM_H_
# include "op.h"

typedef struct	s_pars
{
  char		**tab_file_str;
  char		**tab_inst_str;
  char		*champ_name;
  char		*line;
  char		*tab_inst_char;
  int		fd;
  int		nb_line;
  int		size_line;
}		t_pars;

int		check_file_name(char *file);
int		pars_file_line(t_pars *s);
int		pars_header(t_pars *s, header_t *o);
int		pars_inst(t_pars *s, header_t *o);
void		my_err(char *message_err, t_pars *s);

#endif /*ASM_H_*/
