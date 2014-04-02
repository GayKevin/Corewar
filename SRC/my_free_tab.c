/*
** my_free_tab.c for free_tab in /home/gay_k/rendu/CPE_2014_corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Apr  2 16:28:53 2014 Kevin Gay
** Last update Wed Apr  2 16:56:17 2014 Kevin Gay
*/

#include <unistd.h>
#include <stdlib.h>

void	my_free_tab(char **tab, int nbr)
{
  int	i;

  i = -1;
  my_putchar('i');
  while (++i != nbr)
    {
      free(tab[i]);
    }
  free(tab);
}
