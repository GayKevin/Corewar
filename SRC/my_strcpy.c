/*
** my_strcpy.c for strcpy in /home/gay_k/rendu/PSU/PSU_2013_minishell1
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Fri Mar  7 12:55:20 2014 Kevin Gay
** Last update Mon Mar 24 11:06:01 2014 Kevin Gay
*/

char    *my_strcpy(char *dest, char *src)
{
  int   i;

  i = -1;
  while (src[++i] != '\0')
    dest[i] = src[i];
  dest[i] = '\0';
  return (dest);
}

char    *my_strcpy_name(char *dest, char *src)
{
  int   i;

  i = -1;
  while (src[i] != '.' && src[i + 1] != 'c' && src[i + 2] != 'o')
    {
      dest[i] = src[i];
      ++i;
    }
  dest[i] = '\0';
  return (dest);
}
