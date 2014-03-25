/*
** tool.c for tool in /home/limone_m/rendu/CPE_2014_corewar/corewar
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Tue Mar 18 16:22:11 2014 Maxime Limone
<<<<<<< HEAD
** Last update Wed Mar 19 20:17:16 2014 Maxime Limone
=======
** Last update Tue Mar 18 22:07:22 2014 Kevin Gay
>>>>>>> 029bd797e21cb90a161ca40b708c07ceb67cb47d
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}

int	my_strlen(char *str)
{
  int	i;

  i = 0;
  while (str[i++] != '\0');
  return (i);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i++]);
      if (str[i] == '\\' && str[i + 1] == 'n')
	my_putchar(10);
    }
}

void	my_putnbr(int nb)
{
  int	a;

  a = 0;
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * - 1;
    }
  if (nb >= 10)
    my_putnbr(nb / 10);
  if (a == 1)
    {
      a = 0;
      my_putchar(nb % 10 + '1');
    }
  else
    my_putchar(nb % 10 + '0');
}

int	my_getnbr(char *str)
{
  int	i;
  int	i2;
  int	nb;

  i = 0;
  i2 = 1;
  while ((str[i] != '\0') && (str[i] == '+' || str[i] == '-'))
    {
      if (str[i] == '-')
        {
	  i2 = i2 * (-1);
	}
      i = i + 1;
    }
  str = str + i;
  nb = 0;
  i = 0;
  while (str[i] >= '0' && str[i] <= '9')
    {
      nb = nb * 10;
      nb = nb + (str[i] - '0');
      i = i + 1;
    }
  nb = nb * i2;
  return (nb);
}
