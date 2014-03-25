/*
** asm.h for asm in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 20:02:24 2014 Maxime Limone
** Last update Mon Mar 24 16:35:58 2014 Maxime Limone
*/

#ifndef ASM_H_
# define ASM_H_

typedef struct	s_pars
{
  char		*champ_name;
  char		*line;
  int		fd;
}		t_pars;

typedef struct	s_get_data
{
  char		*name;
  char		*comment;
}		t_get_data;

void		check_file_name(char *file);
void		my_exit_err(char *message_err);
int		pars_file_line(t_pars *s);

#endif /*ASM_H_*/
