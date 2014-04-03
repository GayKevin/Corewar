/*
** main.c for main in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:19:28 2014 Maxime Limone
** Last update Wed Apr  2 14:02:05 2014 Maxime Limone
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include "tool.h"
#include "asm.h"

int		main(int argc, char **argv)
{
  t_pars	s;

  if (argc < 2)
    {
      my_putstr("\e[1;31mUsage: ./asm/asm [file_name].s\e[0m\n");
      return (0);
    }
  s.champ_name = argv[1];
  if (check_file_name(s.champ_name) == -2)
    {
      my_putstr("\e[1;31mError: incompatible file (file type is [.s])\e[0m\n");
      return (-2);
    }
  if ((s.fd = open(s.champ_name, O_RDONLY)) == -1)
    {
      my_err("file not found", &s);
      return (-1);
    }
  if (pars_file_line(&s) == -3)
    return (-1);
  return (0);
}
