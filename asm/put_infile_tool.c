/*
** put_infile_tool.c for put_infile_tool in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 26 18:57:28 2014 Maxime Limone
** Last update Thu Mar 27 17:05:49 2014 Maxime Limone
*/

#include <unistd.h>

void	my_putchar_infile(char c, int fd)
{
  write(fd, &c, 1);
}

void	my_putstr_infile(char *str, int fd, int size)
{
  int	i;

  i = 0;
  while (i < size)
    my_putchar_infile(str[i++], fd);
}

void	my_putnbr_infile(int nb, int fd)
{
  write(fd, &nb, sizeof(nb));
}
