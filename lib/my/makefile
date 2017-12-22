##
## EPITECH PROJECT, 2017
## makefile
## File description:
## 
##

SRC	=	main.c	\
		my_putchar.c	\
		my_put_nbr.c	\
		my_putstr.c	\

OBJ 	=	$(SRC:.c=.o)

NAME	=	libmy.a

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc $(NAME) $(OBJ)
clean:
	rm -f $(OBJ)
fclean: clean
	rm -f $(NAME)
re: fclean all
