/*
** my_strcmp.c for my_strcmp in /home/limone_m/rendu/CPE_2014_corewar/SRC
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Thu Apr  3 16:05:44 2014 Maxime Limone
** Last update Thu Apr  3 17:45:55 2014 Maxime Limone
*/

#include "corewar.h"

int	my_strcmp(char *s1, char *s2)
{
  int	i;
  int	diff;

  i = 0;
  diff = 0;
  while (s1[i] != '\0' || s2[i] != '\0')
    {
      if (s1[i] != s2[i])
        diff = diff + 1;
      i = i + 1;
    }
  return (diff);
}

int	my_strncmp(char *s1, char *s2, int n)
{
  int	i;
  int	diff;

  i = 0;
  diff = 0;
  while (i != n)
    {
      if (s1[i] != s2[i])
        diff++;
      i++;
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
