/*
** tool.h for tool in /home/limone_m/rendu/CPE_2014_corewar/Include
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 19 20:11:35 2014 Maxime Limone
** Last update Thu Apr  3 14:01:08 2014 Maxime Limone
** Last update Wed Mar 26 20:43:33 2014 Maxime Limone
*/

#ifndef TOOL_H_
# define TOOL_H_

char		**str_to_wordtab(char *str);
char		*clean_str(char *str, int size);
char		*epur_str(char *str);
char		*my_strcat(char *s1, char *s2);
int		my_getnbr(char *str);
int		my_strlen(char *str);
void		my_putchar(char c);
void		my_putnbr(int nb);
void		my_putstr(char *str);
void		showtab(char **tab);

#endif /*TOOL_H_*/
