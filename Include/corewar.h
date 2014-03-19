/*
** corewar.h for corewar in /home/limone_m/rendu/CPE_2014_corewar/Include
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:29:04 2014 Maxime Limone
** Last update Wed Mar 19 21:14:32 2014 Maxime Limone
*/

#ifndef COREWAR_H_
# define COREWAR_H_

typedef struct	s_core
{
  char		*p1;
  char		*p2;
  char		*p3;
  char		*p4;
  int		dmp;
  int		pn1;
  int		pn2;
  int		pn3;
  int		pn4;
  int		pa1;
  int		pa2;
  int		pa3;
  int		pa4;
}		t_core;

char    *my_strcpy_name(char *dest, char *src);
int	find_option_dump(char **av, t_core *co);
int	find_option_program(char **av, t_core *co);
int	my_strcmp(char *str1, char *str2);
int	my_strcmp_core(char *str1, char *str2);
#endif /*COREWAR_H_*/
