/*
** tool.h for tool.h in /home/limone_m/rendu/CPE_2014_corewar
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Apr  9 18:36:45 2014 Maxime Limone
** Last update Wed Apr  9 18:36:46 2014 Maxime Limone
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
