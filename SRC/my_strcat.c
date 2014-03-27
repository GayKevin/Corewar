/*
** my_strcat.c for my_strcat in /home/limone_m/rendu/CPE_2014_corewar/SRC
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 26 20:40:02 2014 Maxime Limone
** Last update Wed Mar 26 20:43:05 2014 Maxime Limone
*/

#include <stdlib.h>
#include "tool.h"

char	*my_strcat(char *s1, char *s2)
{
  char	*dest;
  int	i;
  int	i2;
  int	size;

  i = -1;
  i2 = 0;
  size = my_strlen(s1) + my_strlen(s2);
  if ((dest = malloc(sizeof(char) * size + 1)) == NULL)
    return (NULL);
  while (s1[++i] != '\0')
    dest[i] = s1[i];
  while (s2[i2] != '\0')
    dest[i++] = s2[i2++];
  dest[i] = '\0';
  return (dest);
}
