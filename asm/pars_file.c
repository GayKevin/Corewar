/*
** pars_file.c for pars_file in /home/limone_m/rendu/CPE_2014_corewar/asm
** 
** Made by Maxime Limone
** Login   <limone_m@epitech.net>
** 
** Started on  Wed Mar 19 19:23:38 2014 Maxime Limone
** Last update Sat Apr 12 13:41:27 2014 Maxime Limone
*/

#include <stdlib.h>
#include <unistd.h>
#include "asm.h"
#include "asm_get_data_file.h"
#include "asm_init_tab.h"
#include "get_next_line.h"
#include "my_strcmp.h"
#include "tool.h"
#include "op.h"
#include "pars_value.h"
#include "init.h"

int		pars_file_line(t_pars *s)
{
  header_t	o;
  op_t		t;

  s->nb_line = 1;
  s->g_wrt = -1;
  init_param_type(s);
  init_type_p(s);
  if ((s->wrt_inst_str = malloc(sizeof(char) * 500)) == NULL)
    return (-1);
  while ((s->line = get_next_line(s->fd)))
    {
      s->size_line = my_strlen(s->line);
      if (s->line[0] == COMMENT_CHAR);
      else if (s->line[0] == '.')
	{
	  if (pars_header(s, &o) == -3)
	    return (-3);
	}
      else
	pars_inst(s, &t);
      s->nb_line++;
    }
  print_in_file(s, &o);
  return (0);
}

int		pars_header(t_pars *s, header_t *o)
{
  if (my_strncmp(s->line, NAME_CMD_STRING, 5) == 0)
    {
      if (get_name(s, o) == -3)
	return (-3);
    }
  else if (my_strncmp(s->line, COMMENT_CMD_STRING, 8) == 0)
    {
      if (get_comment(s, o) == -3)
	return (-3);
    }
  else
    {
      my_err("Syntax: Usage \".[name/comment] \"prog [name/comment]\"\"", s);
      return (-3);
    }
  return (0);
}

int		pars_inst(t_pars *s, op_t *t)
{
  int		i;

  if ((s->tab_file_str = str_to_wordtab(epur_str(s->line))) == NULL)
    return (-1);
  if (init_tab_file_str(s) != 0)
    return (-1);
  if (s->tab_file_str[0][my_strlen(s->tab_file_str[0]) - 1] == LABEL_CHAR)
    my_putstr("label\n");
  i = -1;
  while (op_tab[++i].mnemonique != NULL
	 && (my_strcmp(s->tab_file_str[0], op_tab[i].mnemonique) != 0));
  if (op_tab[i].mnemonique == NULL)
    {
      my_err("invalid instruction", s);
      return (-1);
    }
  else
    {
      if (realloc(s->wrt_inst_str, 5) == NULL)
	return (-1);
      s->wrt_inst_str[++s->g_wrt] = op_tab[i].code;
    }
  if (pars_param_diff(s, t, i) != 0)
    return (-1);
  return (0);
}

int		pars_param(t_pars *s, op_t *t, int i)
{
  int		c;

  s->f = -1;
  s->tb = -1;
  if ((s->tmp_s = malloc(sizeof(char) * my_strlen(s->tab_file_str[1]))) == NULL)
    return (-1);
  while (s->tab_file_str[1][++s->f] != '\0')
    {
      c = -1;
      s->tmp_i = -1;
      s->tmp_s = clean_str(s->tmp_s, my_strlen(s->tab_file_str[1]));
      while (++c <= 2 && s->tab_file_str[1][s->f] != s->param_type[c]);
      if (c == 3 && (CHKNB || s->tab_file_str[1][s->f] == LABEL_CHAR))
	c--;
      s->oc_codage = s->oc_codage << 2;
      s->oc_codage += s->param_type[c + 3];
      s->tab_param[++s->tb] = s->param_type[c + 6];
      while (s->tab_file_str[1][++s->f] != SEPARATOR_CHAR
	     && s->tab_file_str[1][s->f] != '\0')
	s->tmp_s[++s->tmp_i] = s->tab_file_str[1][s->f];
      s->tab_param[s->tb + 3] = my_getnbr(s->tmp_s);
    }
  if (sw_occd(s, t, i) != 0)
    return (-1);
  return (0);
}

int		sw_occd(t_pars *s, op_t *t, int i)
{
  if (op_tab[i].nbr_args == 2)
    s->oc_codage = s->oc_codage << 4;
  else if (op_tab[i].nbr_args == 3)
    s->oc_codage = s->oc_codage << 2;
  s->wrt_inst_str[++s->g_wrt] = s->oc_codage;
  if (pars_value(s, t, i) != 0)
    return (-1);
  return (0);
}
