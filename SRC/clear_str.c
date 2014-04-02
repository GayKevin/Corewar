/*
** clear_str.c for clear_str in /home/gay_k/rendu/CPE_2014_corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Fri Mar 28 12:18:30 2014 Kevin Gay
** Last update Wed Apr  2 15:51:44 2014 Kevin Gay
*/

char	*clear_str(char *str, int nbr)
{
  int	i;

  i = -1;
  while (++i != nbr)
    str[i] = '\0';
  return (str);
}
