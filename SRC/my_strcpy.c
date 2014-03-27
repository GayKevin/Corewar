/*
** my_strcpy.c for strcpy in /home/gay_k/rendu/PSU/PSU_2013_minishell1
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Fri Mar  7 12:55:20 2014 Kevin Gay
** Last update Thu Mar 27 18:14:35 2014 Kevin Gay
** Last update Wed Mar 26 20:39:26 2014 Maxime Limone
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
