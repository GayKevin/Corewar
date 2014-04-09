##
## Makefile for Makefile in /home/limone_m/rendu/CPE_2014_corewar
## 
## Made by Maxime Limone
## Login   <limone_m@epitech.net>
## 
## Started on  Tue Mar 18 16:18:17 2014 Maxime Limone
## Last update Wed Apr  9 18:55:02 2014 Maxime Limone
##

SRC_ASM		= asm/main.c \
		  asm/gere_err.c \
		  asm/get_data_file.c \
		  asm/init_value_asm.c \
	          asm/pars_file.c \
		  asm/put_infile_tool.c \
		  SRC/get_next_line.c \
		  SRC/clear_str.c \
		  SRC/my_strcat.c \
		  SRC/my_strcmp.c \
		  SRC/op.c \
		  SRC/str_to_wordtab.c \
		  SRC/tool.c \

SRC_COR		= corewar/main.c \
		  corewar/dump.c \
		  corewar/free_war.c \
	    	  corewar/pointer_function_add.c \
	    	  corewar/pointer_function_read.c \
	    	  corewar/pointer_function_free_war.c \
	    	  corewar/pointer_function_pro_nbr.c \
		  corewar/point_function_option.c \
		  corewar/option_program.c \
		  corewar/read_prog.c \
		  SRC/my_free_tab.c \
		  SRC/get_next_line.c \
		  SRC/my_show_tab.c \
	          SRC/my_strcpy.c\
		  SRC/clear_tab.c \
		  SRC/clear_str.c \
	   	  SRC/my_strcmp.c \
		  SRC/tool.c

NAME_ASM	= asm/asm

NAME_COR	= corewar/corewar

OBJ_ASM		= $(SRC_ASM:.c=.o)

OBJ_COR		= $(SRC_COR:.c=.o)

CC		= cc

CFLAGS		= -IInclude -Wall -g

RM		= rm -f

all:		$(NAME_ASM) $(NAME_COR)

$(NAME_ASM):	$(OBJ_ASM)
		$(CC) -o $(NAME_ASM) $(OBJ_ASM)

$(NAME_COR):	$(OBJ_COR)
		$(CC) $(CFLAGS) -o $(NAME_COR) $(OBJ_COR)

clean:
		$(RM) $(OBJ_ASM) $(OBJ_COR)

fclean:		clean
		$(RM) $(NAME_ASM) asm/*~ *#
		$(RM) $(NAME_COR) corewar/*~ *#
		$(RM) SRC/*~ *#
		$(RM) *~ *#

re:		fclean all
