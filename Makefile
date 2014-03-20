##
## Makefile for Makefile in /home/limone_m/rendu/CPE_2014_corewar
## 
## Made by Maxime Limone
## Login   <limone_m@epitech.net>
## 
## Started on  Tue Mar 18 16:18:17 2014 Maxime Limone
## Last update Thu Mar 20 11:35:45 2014 Kevin Gay
## Last update Wed Mar 19 15:04:18 2014 Kevin Gay
##

SRC_ASM		= asm/main.c \
		  asm/gere_err.c \
                  asm/pars_file.c \
		  SRC/tool.c \
		  SRC/get_next_line.c \

SRC_COR		= corewar/main.c \
		  corewar/dump.c \
	    	  corewar/pointer_function_name_pro.c \
	    	  corewar/pointer_function_add.c \
	    	  corewar/pointer_function_pro_nbr.c \
		  corewar/point_function_option.c \
		  corewar/option_program.c \
	          SRC/my_strcpy.c\
	   	  SRC/my_strcmp.c \
		  SRC/tool.c

NAME_ASM	= asm/asm

NAME_COR	= corewar/corewar

OBJ_ASM		= $(SRC_ASM:.c=.o)

OBJ_COR		= $(SRC_COR:.c=.o)

CC		= cc

CFLAGS		= -Wall -g -IInclude

RM		= rm -f

all:		$(NAME_ASM) $(NAME_COR)

$(NAME_ASM):	$(OBJ_ASM)
		$(CC) -o $(NAME_ASM) $(OBJ_ASM)

$(NAME_COR):	$(OBJ_COR)
		$(CC) -o $(NAME_COR) $(OBJ_COR)

clean:
		$(RM) $(OBJ_ASM) $(OBJ_COR)

fclean:		clean
		$(RM) $(NAME_ASM) asm/*~ *#
		$(RM) $(NAME_COR) corewar/*~ *#
		$(RM) SRC/*~ *#
		$(RM) *~ *#

re:		fclean all
