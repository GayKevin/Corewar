/*
** read_prog.c for read_pro7 in /home/gay_k/rendu/Corewar/corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Thu Mar 20 21:57:39 2014 Kevin Gay
** Last update Fri Mar 28 12:24:38 2014 Kevin Gay
*/

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "corewar.h"
#include "op.h"

void	tab_function_read(int (*tab_func[5])(t_core *co, header_t *hd))
{
  tab_func[1] = &read_header1;
  tab_func[2] = &read_header2;
  tab_func[3] = &read_header3;
  tab_func[4] = &read_header4;
}

int	read_file_cor(char *av, int p, t_core *co, header_t *hd)
{
  int	fd;
  int	(*tab_func[5])(t_core *co, header_t *hd);

  if ((hd = malloc(sizeof(hd))) == NULL)
    return (1);
  if ((fd = open(av, O_RDONLY)) == -1)
    {
      my_putstr("Cannot open the file\n");
      return (1);
    }
  if ((read(fd, hd, sizeof(hd))) == -1)
    {
      my_putstr("Cannot read the file\n");
      return (1);
    }
  tab_function_read(tab_func);
  if ((tab_func[p](co, hd)) == 1)
    return (1);
  close(fd);
  free(hd);
  return (0);
}
