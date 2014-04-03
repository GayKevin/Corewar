/*
** my_show_tab.c for my_show_tab in /home/gay_k/rendu/CPE_2014_corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Apr  2 15:56:51 2014 Kevin Gay
** Last update Wed Apr  2 15:59:15 2014 Kevin Gay
*/

#include <unistd.h>
#include <tool.h>

void	my_show_tab(char **tab)
{
  int	i;

  i = -1;
  while (tab[++i] != NULL)
    my_putstr(tab[i]);
}
