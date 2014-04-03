/*
** corewar.h for corewar in /home/limone_m/rendu/CPE_2014_corewar/Include
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:29:04 2014 Maxime Limone
** Last update Thu Apr  3 13:54:22 2014 Kevin Gay
** Last update Wed Mar 19 15:07:04 2014 Kevin Gay
*/

#ifndef COREWAR_H_
# define COREWAR_H_
# define PROG_NAME	129
# define COMMENT	2049
#include "op.h"

struct		s_pr
{
  char		nme1[PROG_NAME];
  char		cmnt1[COMMENT];
  char		nme2[PROG_NAME];
  char		cmnt2[COMMENT];
  char		nme3[PROG_NAME];
  char		cmnt3[COMMENT];
  char		nme4[PROG_NAME];
  char		cmnt4[COMMENT];
};

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
  int		p;
  char		*p1;
  char		*p2;
  char		*p3;
  char		*p4;
  char		**war1;
  char		**war2;
  char		**war3;
  char		**war4;
  struct s_pr	pr;
}		t_core;

typedef	int (*flag)(char *av, t_core *co, int p);

char	**clear_tab(char **str, int nbr, int nb);
void	free_war1(t_core *co);
void	free_war2(t_core *co);
void	free_war3(t_core *co);
void	free_war4(t_core *co);
int	find_option_dump(char **av, t_core *co);
int	find_option_program(char **av, t_core *co, header_t *hd);
void	free_war(t_core *co);
char	*get_next_line(const int fd);
void	my_free_tab(char **tab, int nbr);
void	my_show_tab(char **tab);
int	my_strcmp(char *str1, char *str2);
int	my_strcmp_core(char *str1, char *str2);
char    *my_strcpy(char *dest, char *src);
char    *my_strcpy_name(char *dest, char *src);
void	my_putchar(char c);
void	my_putstr(char *str);
void	my_putnbr(int nb);
int	my_getnbr(char *str);
int	my_strcmp(char *str1, char *str2);
int	my_strcmp_(char *str1, char *str2);
int     my_strlen(char *str);
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
int	read_header1(t_core *co, header_t *hd);
int	read_file_cor(char *av, int p, t_core *co, header_t *hd);
int	read_header2(t_core *co, header_t *hd);
int	read_header3(t_core *co, header_t *hd);
int	read_header4(t_core *co, header_t *hd);
flag	*tab_function_pro_add(flag *tab_function_pro_add);
flag	*tab_function_pro_nbr(flag *tab_function_pro_nbr);
#endif /*COREWAR_H_*/
