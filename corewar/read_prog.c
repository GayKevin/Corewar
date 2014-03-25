/*
** read_prog.c for read_pro7 in /home/gay_k/rendu/Corewar/corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Thu Mar 20 21:57:39 2014 Kevin Gay
** Last update Tue Mar 25 10:34:26 2014 Kevin Gay
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
  if ((fd = open(av, O_RDONLY)) == -1)
    return (1);
  if ((read(fd, hd, sizeof(hd))) == -1)
    return (1);
  /* my_strcpy(co->pr.nme1, hd->prog_name); */
  my_strcpy(co->pr.cmnt1, hd->comment);
  my_putchar('\n');
  //  my_putstr(co->pr.cmnt1);
  my_putstr(hd->comment);
  close(fd);
  free(hd);
  /* my_putstr(co->pr.nme1); */
  return (0);
}
