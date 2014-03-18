/*
** main.c for main in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:19:28 2014 Maxime Limone
** Last update Tue Mar 18 20:08:54 2014 Maxime Limone
*/

#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int		main(int argc, char **argv)
{
  int		fd;

  if (argc < 2)
    my_exit_err("Usage: ./asm/asm [file_name].s");
  check_file_name(argv[1]);
  if ((fd = open(argv[1], O_RDONLY)) == -1)
    my_exit_err("file not found");
  return (0);
}
