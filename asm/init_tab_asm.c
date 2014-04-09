/*
** init_tab_asm.c for init_tab_asm in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Apr  2 18:04:21 2014 Maxime Limone
** Last update Thu Apr  3 18:01:08 2014 Maxime Limone
*/

#include <stdlib.h>
#include "asm_init_tab.h"

char		**init_tab_inst_str(char **tab_inst_str)
{
  int		i;

  i = 0;
  if ((tab_inst_str = malloc(sizeof(char *) * 17)) == NULL)
    return (NULL);
  while (i != 16)
    {
      if ((tab_inst_str[i++] = malloc(sizeof(char) * 6)) == NULL)
	return (NULL);
    }
  tab_inst_str[0] = "live";
  tab_inst_str[1] = "ld";
  tab_inst_str[2] = "st";
  tab_inst_str[3] = "add";
  tab_inst_str[4] = "sub";
  tab_inst_str[5] = "and";
  tab_inst_str[6] = "or";
  tab_inst_str[7] = "xor";
  tab_inst_str[8] = "zjmp";
  tab_inst_str[9] = "ldi";
  tab_inst_str[10] = "sti";
  tab_inst_str[11] = "fork";
  tab_inst_str[12] = "lld";
  tab_inst_str[13] = "lldi";
  tab_inst_str[14] = "lfork";
  tab_inst_str[15] = "aff";
  return (tab_inst_str);
}

char		*init_tab_inst_char(char *tab_inst_char)
{
  if ((tab_inst_char = malloc(sizeof(char) * 16)) == NULL)
    return (NULL);
  tab_inst_char[0] = 1;
  tab_inst_char[1] = 2;
  tab_inst_char[2] = 3;
  tab_inst_char[3] = 4;
  tab_inst_char[4] = 5;
  tab_inst_char[5] = 6;
  tab_inst_char[6] = 7;
  tab_inst_char[7] = 8;
  tab_inst_char[8] = 9;
  tab_inst_char[9] = 10;
  tab_inst_char[10] = 11;
  tab_inst_char[11] = 12;
  tab_inst_char[12] = 13;
  tab_inst_char[13] = 14;
  tab_inst_char[14] = 15;
  tab_inst_char[15] = 16;
  tab_inst_char[16] = '\0';
  return (tab_inst_char);
}
