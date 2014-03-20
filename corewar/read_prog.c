/*
** read_prog.c for read_pro7 in /home/gay_k/rendu/Corewar/corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Thu Mar 20 21:57:39 2014 Kevin Gay
** Last update Thu Mar 20 22:23:01 2014 Kevin Gay
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "corewar.h"
#include "op.h"

int	read_file_cor(char *av, int p, t_core *co, header_t *hd)
{
  int	fd;

  if ((hd = malloc(sizeof(hd))) == NULL)
    return (1);
  ((fd = open(av, O_RDONLY)) == -1)
    return (1);
  if ((read(fd, hd, sizeof(hd))) == -1)
    return (1);
  close(fd);
}
