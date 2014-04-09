/*
** get_next_line.c for get_next_line in /home/limone_m/rendu/CPE_2014_corewar
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 19 20:41:31 2014 Maxime Limone
** Last update Wed Apr  9 18:50:00 2014 Maxime Limone
*/

#include <unistd.h>
#include <stdlib.h>
#include "get_next_line.h"

char		*get_next_line(const int fd)
{
  static int	i;
  int		c;
  char		buffer[LEN];
  char		*str;

  c = 0;
  if ((str = malloc(sizeof (char *) * LEN)) == NULL)
    return (NULL);
  str = clear_str(str, LEN);
  if ((read(fd, buffer, LEN)) == -1)
    exit(1);
  while (buffer[i] != '\n')
    {
      str[c++] = buffer[i++];
      if (buffer[i - 1] == '\0')
	{
	  free(str);
	  return (NULL);
	}
    }
  str[c++] = '\n';
  str[c] = '\0';
  i++;
  return (str);
}
