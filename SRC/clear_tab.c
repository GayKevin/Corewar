/*
** clear_tab.c for clear_tab in /home/gay_k/rendu/CPE_2014_corewar/corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Apr  2 15:50:19 2014 Kevin Gay
** Last update Wed Apr  2 15:54:37 2014 Kevin Gay
*/

char	**clear_tab(char **str, int nbr, int nb)
{
  int	i;
  int	o;

  o = 0;
  i = -1;
  while (++i != nbr)
    {
      while (o != nb)
	str[i][o++] = '\0';
      o = 0;
    }
  return (str);
}
