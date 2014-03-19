/*
** asm.h for asm in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 20:02:24 2014 Maxime Limone
** Last update Wed Mar 19 20:10:16 2014 Maxime Limone
*/

#ifndef ASM_H_
# define ASM_H_

typedef struct	s_pars
{
  int		fd;
  char		*line;
}		t_pars;

void		check_file_name(char *file);
void		my_exit_err(char *message_err);
void		pars_file_line(t_pars *s);

#endif /*ASM_H_*/
