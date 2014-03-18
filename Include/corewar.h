/*
** corewar.h for corewar in /home/limone_m/rendu/CPE_2014_corewar/Include
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:29:04 2014 Maxime Limone
** Last update Tue Mar 18 22:28:41 2014 Kevin Gay
*/

#ifndef COREWAR_H_
# define COREWAR_H_


typedef struct	s_core
{
  int		dmp;
}		t_core;

void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putnbr(int nb);
int	my_getnbr(char *str);
int	my_strcmp(char *str1, char *str2);
int	find_option_dump(char **av, t_core *co);

#endif /*COREWAR_H_*/
