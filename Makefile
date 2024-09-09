##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## oh bordel
##

SRC	=	main.c 	\
		main2.c \
		main3.c \
		main4.c  \

NAME	= test

OBJ	= $(SRC:.c=.o)

FLAGS = -l csfml-graphics -l csfml-system -l csfml-audio -l csfml-window

all:	$(NAME)

$(NAME): $(OBJ)
	gcc -o $(NAME) $(OBJ) $(FLAGS)
	rm -f $(OBJ)

clean:
	rm -f $(OBJ)

fclean:	clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re

