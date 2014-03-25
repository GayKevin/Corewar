/*
** get_data_file.c for get_data_file in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Mon Mar 24 16:18:26 2014 Maxime Limone
** Last update Tue Mar 25 10:06:00 2014 Maxime Limone
*/

int		get_name(char *line, t_get_data *s, header_t *o)
{
  int		n;
  int		i;

  n = 0;
  i = 0;
  while (line[i] != '\"' || i++ < s->size_line);
  if (i == s->size_line)
    return (-1);
  else
    {
      while (line[i] != '\"' || i < s->size_line)
	
    }
}

int		get_comment(char *line)
{
  int	i;

  i = 0;
}
