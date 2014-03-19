/*
** main.c for main in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:19:28 2014 Maxime Limone
** Last update Wed Mar 19 20:08:41 2014 Maxime Limone
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
  check_file_name(argv[1]);
  if ((s.fd = open(argv[1], O_RDONLY)) == -1)
    my_exit_err("file not found");
  pars_file_line(&s);
  return (0);
}
