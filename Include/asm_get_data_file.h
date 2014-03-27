/*
** asm_get_data_file.h for asm_get_data_file in /home/limone_m/rendu/CPE_2014_corewar
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 26 15:45:18 2014 Maxime Limone
** Last update Wed Mar 26 20:54:48 2014 Maxime Limone
*/

#ifndef ASM_GET_DATA_FILE_H_
# define ASM_GET_DATA_FILE_H_
# include "op.h"

char		*new_name_cor(char *s_name);
int		get_name(t_pars *s, header_t *o);
int		get_comment(t_pars *s, header_t *o);
int		print_in_file(t_pars *s, header_t *o);

#endif /*ASM_GET_DATA_FILE_H_*/
