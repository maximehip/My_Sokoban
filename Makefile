##
## EPITECH PROJECT, 2017
## Makefile
## File description:
## Makefile for Pushswap
##




CC	= gcc

OBJ	= main.c	\
	  intro.c	\
	  help.c	\
	  move_forward.c \
	  move_left.c	\
	  end_game.c	\
	  calcul_obj.c	\
	  move_down.c	\
	  move_up.c	\
	  calcul_distance.c	\
	  check_map.c	\
	  in_game.c	\
	  map_editor.c	\
	  move_editor_down.c	\
	  move_editor_forward.c	\
	  move_editor_left.c	\
	  move_editor_up.c	\

RM	= rm -f

NAME	= my_sokoban

LIB	= -lmy -L./lib/my/

NCURSES = -lncurses

COM	= $(OBJ:.c=.o)

all:	$(NAME)

$(NAME):$(COM)
	cd lib/my/; $(MAKE)
	$(CC) -o $(NAME) $(COM) $(LIB) $(NCURSES)

clean:
	$(RM) $(COM)
fclean:	clean
	$(RM) $(NAME)
re: fclean all
