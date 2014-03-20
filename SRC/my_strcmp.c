/*
** my_strcmp.c for strcmp in /home/gay_k/rendu/PSU/PSU_2013_minishell1
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Feb 26 13:33:18 2014 Kevin Gay
<<<<<<< HEAD
** Last update Thu Mar 20 09:21:42 2014 Kevin Gay
*/

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

  i = 0;
  while (str1[i] == str2[i] && str2[i + 1] != '\0')
    i++;
  if (str1[i - 4] == '.' && str2[i - 4] == '.')
    if (str1[i - 3] == 'c' && str2[i - 3] == 'c')
      if (str1[i - 2] == 'o' && str2[i - 2] == 'o')
	if (str1[i - 1] == 'r' && str2[i - 1] == 'r')
	  if (str1[i] == 'e' && str2[i] == 'e')
	    return (0);
  if (str1[i] != str2[i])
    return (1);
  return (0);
}
