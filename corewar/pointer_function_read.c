/*
** pointer_function_read.c for read in /home/gay_k/rendu/Corewar
** 
** Made by Kevin Gay
** Login   <gay_k@epitech.net>
** 
** Started on  Wed Mar 26 11:28:23 2014 Kevin Gay
** Last update Fri Mar 28 12:37:29 2014 Kevin Gay
*/

#include "corewar.h"

int	read_header1(t_core *co, header_t *hd)
{
  int	i;

  i = -1;
  while (++i != 128)
    co->pr.nme1[i] = '\0';
  my_strcpy(co->pr.nme1, hd->prog_name);
  my_strcpy(co->pr.cmnt1, hd->comment);
  return (0);
}

int	read_header2(t_core *co, header_t *hd)
{
  my_strcpy(co->pr.nme2, hd->prog_name);
  my_strcpy(co->pr.cmnt2, hd->comment);
  return (0);
}

int	read_header3(t_core *co, header_t *hd)
{
  my_strcpy(co->pr.nme3, hd->prog_name);
  my_strcpy(co->pr.cmnt3, hd->comment);
  return (0);
}

int	read_header4(t_core *co, header_t *hd)
{
  my_strcpy(co->pr.nme4, hd->prog_name);
  my_strcpy(co->pr.cmnt4, hd->comment);
  return (0);
}

