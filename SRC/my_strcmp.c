/*
** my_strcmp.c for strcmp in /home/gay_k/rendu/PSU/PSU_2013_minishell1
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Feb 26 13:33:18 2014 Kevin Gay
** Last update Tue Mar 18 22:09:03 2014 Kevin Gay
*/

int	my_strcmp(char *str1, char *str2)
{
  int	i;

  i = 0;
  while (str1[i] == str2[i] && str2[i + 1] != '\0')
      i++;
  if (str1[i] != str2[i])
    return (1);
  return (0);
}
