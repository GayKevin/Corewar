/*
** str_to_wordtab.c for str_to_wordtab in /home/limone_m/rendu/CPE_2014_corewar/SRC
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Thu Apr  3 10:58:23 2014 Maxime Limone
** Last update Thu Apr  3 14:11:09 2014 Maxime Limone
*/

#include <stdlib.h>
#include "tool.h"

char		**str_to_wordtab(char *str)
{
  char		**tab;
  int		i;
  int		c;
  int		ci;

  i = 0;
  c = -1;
  ci = 0;
  if ((tab = malloc(sizeof(char *) * my_strlen(str))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      ci = 0;
      while ((str[i] == ' ' || str[i] == '\t') && str[i] != '\0')
        i++;
      if (str[i] != '\0')
        {
	  if ((tab[++c] = malloc(sizeof(char) * my_strlen(str))) == NULL)
	    return (NULL);
          while (str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
            tab[c][ci++] = str[i++];
          tab[c][ci] = '\0';
        }
    }
  showtab(tab);
  return (tab);
}

char		*epur_str(char *str)
{
  int		i;
  int		id;
  char		*dest;

  i = 0;
  id = 0;
  if ((dest = malloc(sizeof(char) * my_strlen(str))) == NULL)
    return (NULL);
  dest = clean_str(dest, my_strlen(str));
  while ((str[i] == ' ') || (str[i] == '\t'))
    i++;
  while (str[i] != '\0')
    if ((str[i] == ' ' || str[i] == '\t') &&
        ((str[i + 1] == '\0') || (str[i + 1] == ' ' || str[i + 1] == '\t')))
      i++;
    else if ((str[i] == ' ' || str[i] == '\t') &&
             (str[i + 1] != ' ' && str[i + 1] != '\t'))
      {
	dest[id++] = ' ';
        i++;
      }
    else
      dest[id++] = str[i++];
  return (dest);
}

char		*clean_str(char *str, int size)
{
  int		i;

  i = 0;
  while (i != size)
    str[i++] = '\0';
  return (str);
}

void		showtab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr(tab[i++]);
      my_putchar(10);
    }
}
