/*
** option_program.c for option programm in /home/gay_k/rendu/Corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Mar 19 13:16:52 2014 Kevin Gay
** Last update Tue Mar 25 12:10:37 2014 Kevin Gay
** Last update Wed Mar 19 15:07:30 2014 Kevin Gay
*/

#include <unistd.h>
#include <stdlib.h>
#include "corewar.h"
#include "tool.h"
#include "op.h"

int	find_program_number(char *av, t_core *co, int p)
{
  int	i;
  flag	*tab_func;

  i = -1;
  tab_func = NULL;
  while (av[++i] != '\0')
    if (av[i] < 48 || av[i] > 57)
      {
	my_putstr("It must be a number after -n\n");
	return (1);
      }

  tab_func = tab_function_pro_nbr(tab_func);
  if (tab_func[p] (av, co, p) == 1)
    return (1);
  free(tab_func);
  return (0);
}

int	find_load_adress(char *av, t_core *co, int p)
{
  int	i;
  flag	*tab_func;

  i = -1;
  tab_func = NULL;
  while (av[++i] != '\0')
    if (av[i] < 48 || av[i] > 57)
      {
	my_putstr("It must be a number after -n\n");
	return (1);
      }
  tab_func = tab_function_pro_add(tab_func);
  if (tab_func[p] (av, co, p) == 1)
    return (1);
  free(tab_func);
  return (0);
}

int	find_option_program(char **av, t_core *co, header_t *hd)
{
  int	i;
  int	p;

  p = 1;
  i = -1;
  while (av[++i] != NULL)
    {
      if (my_strcmp(av[i], "-n") == 0)
	if (find_program_number(av[i + 1], co, p) == 1)
	  return (1);
      if (my_strcmp(av[i], "-a") == 0)
	if (find_load_adress(av[i + 1], co, p) == 1)
	  return (1);
      if (my_strcmp_core(av[i], ".cor") == 0)
	{
	  read_file_cor(av[i], p, co, hd);
	  ++p;
	}
    }
  return (0);
}
