/*
** my_strcmp.c for strcmp in /home/gay_k/rendu/PSU/PSU_2013_minishell1
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Feb 26 13:33:18 2014 Kevin Gay
** Last update Thu Mar 20 11:08:01 2014 Kevin Gay
*/

#include "corewar.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	diff;

  i = 0;
  diff = 0;
  while (s1[i] != '\0' && s2[i] != '\0')
    {
      if (s1[i] != s2[i])
        diff = diff + 1;
      i = i + 1;
    }
  return (diff);
}

int	my_strcmp_core(char *str1, char *str2)
{
  int	i;
  int	l;

  l = 0;
  l = my_strlen(str2) - 1;
  i = 0;
  i = my_strlen(str1) - 1;
  while (str1[i] == str2[l])
    {
      if (l == 0)
	return (0);
      --i;
      --l;
    }
  return (1);
}
