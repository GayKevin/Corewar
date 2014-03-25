/*
** my_putchar.c for my_putchar in /home/gay_k/rendu/Piscine-C-lib/my
** 
** Made by Kévin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Oct  9 09:43:19 2013 Kévin Gay
** Last update Wed Mar 19 15:05:19 2014 Kevin Gay
*/

#include <unistd.h>

int     my_strlen(char *str)
{
  int	i;

  i = 0;
  if (str == NULL)
    return (0);
  while (str[i] != '\0')
    i = i + 1;
  return (i);
}
