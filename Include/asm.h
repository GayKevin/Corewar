/*
** asm.h for asm in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 20:02:24 2014 Maxime Limone
** Last update Wed Mar 26 20:16:26 2014 Maxime Limone
*/

#ifndef ASM_H_
# define ASM_H_

typedef struct	s_pars
{
  char		*champ_name;
  char		*line;
  int		fd;
  int		size_line;
}		t_pars;

int		check_file_name(char *file);
int		pars_file_line(t_pars *s);
void		my_err(char *message_err, t_pars *s);

#endif /*ASM_H_*/
