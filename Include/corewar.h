
/*
** corewar.h for corewar in /home/limone_m/rendu/CPE_2014_corewar/Include
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:29:04 2014 Maxime Limone
** Last update Thu Mar 20 15:53:03 2014 Kevin Gay
** Last update Wed Mar 19 15:07:04 2014 Kevin Gay
*/

#ifndef COREWAR_H_
# define COREWAR_H_

typedef struct	s_core
{
  int		dmp;
  int		pn1;
  int		pn2;
  int		pn3;
  int		pn4;
  int		pa1;
  int		pa2;
  int		pa3;
  int		pa4;
  char		*p1;
  char		*p2;
  char		*p3;
  char		*p4;
}		t_core;

typedef	int (*flag)(char *av, t_core *co, int p);

char    *my_strcpy_name(char *dest, char *src);
int	find_option_dump(char **av, t_core *co);
int	find_option_program(char **av, t_core *co);
int	my_strcmp(char *str1, char *str2);
int	my_strcmp_core(char *str1, char *str2);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putnbr(int nb);
int	my_getnbr(char *str);
int	my_strcmp(char *str1, char *str2);
int	my_strcmp_(char *str1, char *str2);
int     my_strlen(char *str);
char    *my_strcpy_name(char *dest, char *src);
int	pro_add_1(char *av, t_core *co, int p);
int	pro_add_2(char *av, t_core *co, int p);
int	pro_add_3(char *av, t_core *co, int p);
int	pro_add_4(char *av, t_core *co, int p);
int	pro_name_1(char *av, t_core *co, int p);
int	pro_name_2(char *av, t_core *co, int p);
int	pro_name_3(char *av, t_core *co, int p);
int	pro_name_4(char *av, t_core *co, int p);
int	pro_nbr_1(char *av, t_core *co, int p);
int	pro_nbr_2(char *av, t_core *co, int p);
int	pro_nbr_3(char *av, t_core *co, int p);
int	pro_nbr_4(char *av, t_core *co, int p);
flag	*tab_function_pro_name(flag *tab_function_pro_name);
flag	*tab_function_pro_add(flag *tab_function_pro_add);
flag	*tab_function_pro_nbr(flag *tab_function_pro_nbr);
#endif /*COREWAR_H_*/
