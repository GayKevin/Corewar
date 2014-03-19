/*
** gere_err.c for gere_err in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 17:06:04 2014 Maxime Limone
** Last update Wed Mar 19 20:15:17 2014 Maxime Limone
*/

#include <stdlib.h>
#include "asm.h"
#include "tool.h"

void		check_file_name(char *file)
{
  int	i;

  i = my_strlen(file) - 2;
  if (file[i] != 's' && file[i - 1] != '.')
    my_exit_err("incompatible file (type file is [.s])");
}

void		my_exit_err(char *message_err)
{
  my_putstr("\e[1;31mError: ");
  my_putstr(message_err);
  my_putstr("\e[0m\n");
  exit(3);
}
