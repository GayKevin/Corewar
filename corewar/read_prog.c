/*
** read_prog.c for read_pro7 in /home/gay_k/rendu/Corewar/corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Thu Mar 20 21:57:39 2014 Kevin Gay
** Last update Thu Apr  3 14:27:52 2014 Kevin Gay
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

void	read_entire_file(t_core *co, header_t *hd, int fd, int p)
{
  int	i;

  i = 0;
  co->war1 = malloc(sizeof(char *) * 15);
  while (i != 15)
    co->war1[i++] = malloc(sizeof(char) * 520);
  co->war1 = clear_tab(co->war1, 15, 520);
  i = -1;
  while (get_next_line(fd) != NULL)
    read(fd, co->war1[++i], 512);
  co->war1[++i] = NULL;
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
  read_entire_file(co, hd, fd, p);
  close(fd);
  free(hd);
  return (0);
}
