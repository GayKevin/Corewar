/*
** main.c for main in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:19:28 2014 Maxime Limone
** Last update Mon Mar 24 15:59:34 2014 Maxime Limone
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "asm.h"

int		main(int argc, char **argv)
{
  t_pars	s;

  if (argc < 2)
    my_exit_err("Usage: ./asm/asm [file_name].s");
  s.champ_name = argv[1];
  check_file_name(s.champ_name);
  if ((s.fd = open(s.champ_name, O_RDONLY)) == -1)
    {
      my_putstr("\e[1;31mError: file not found\e[0m\n");
      return (0);
    }
  if (pars_file_line(&s) != 0)
    return (0);
  return (0);
}
