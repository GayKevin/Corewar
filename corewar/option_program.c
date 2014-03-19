/*
** option_program.c for option programm in /home/gay_k/rendu/Corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Mar 19 13:16:52 2014 Kevin Gay
** Last update Wed Mar 19 21:35:29 2014 Maxime Limone
*/

#include <unistd.h>
#include <stdlib.h>
#include "corewar.h"
#include "tool.h"
#include "op.h"

int	find_program_number(char *av, t_core *co, int p)
{
  int	i;

  i = -1;
  while (av[++i] != '\0')
    if (av[i] < 48 || av[i] > 57)
      {
	my_putstr("It must be a number after -n\n");
	return (1);
      }
  if (p == 1)
    co->pn1 = my_getnbr(av);
  else if (p == 2)
    co->pn2 = my_getnbr(av);
  else if (p == 3)
    co->pn3 = my_getnbr(av);
  else if (p == 4)
    co->pn4 = my_getnbr(av);
  return (0);
}

int	find_load_adress(char *av, t_core *co, int p)
{
  int	i;

  i = -1;
  while (av[++i] != '\0')
    if (av[i] < 48 || av[i] > 57)
      {
	my_putstr("It must be a number after -n\n");
	return (1);
      }
  if (p == 1)
    co->pa1 = my_getnbr(av) % MEM_SIZE;
  else if (p == 2)
    co->pa2 = my_getnbr(av) % MEM_SIZE;
  else if (p == 3)
    co->pa3 = my_getnbr(av) % MEM_SIZE;
  else if (p == 4)
    co->pa4 = my_getnbr(av) % MEM_SIZE;
  return (0);

}

int	find_name_program(char *av, int p, t_core *co)
{
  if (p == 1)
    {
      co->p1 = malloc(sizeof(char) * my_strlen(av));
      co->p1 = my_strcpy_name(co->p1, av);
    }
  else if (p == 2)
    {
      co->p2 = malloc(sizeof(char) * my_strlen(av));
      co->p2 = my_strcpy_name(co->p2, av);
    }
  else if (p == 3)
    {
      co->p3 = malloc(sizeof(char) * my_strlen(av));
      co->p3 = my_strcpy_name(co->p3, av);
    }
  else if (p == 4)
    {
      co->p4 = malloc(sizeof(char) * my_strlen(av));
      co->p4 = my_strcpy_name(co->p4, av);
    }
  return (0);
}

int	find_option_program(char **av, t_core *co)
{
  int	i;
  int	p;

  p = 1;
  i = 0;
  while (av[i] != NULL)
    {
      if (my_strcmp(av[i], "-n") == 0)
	if (find_program_number(av[i + 1], co, p) == 1)
	  return (1);
      if (my_strcmp(av[i], "-a") == 0)
	find_load_adress(av[i + 1], co, p);
      if (my_strcmp_core(av[i], ".core") == 0)
	{
	  find_name_program(av[i], p, co);
	  ++p;
	}
    }
  return (0);
}
