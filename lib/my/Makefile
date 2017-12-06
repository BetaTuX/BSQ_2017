##
## EPITECH PROJECT, 2017
## Header makefile
## File description:
## makefile for libmy
##

CC	=	gcc
CFLAGS	+=	-W -Wall -pedantic
SRC	=	*.c
OBJ	=	$(SRC:.c=.o)
NAME	=	libmy.a

all: 	$(NAME)

$(NAME): 	$(OBJ)
	ar rc $(NAME) $(OBJ)

$(OBJ):	$(SRC)
	$(CC) -c $(SRC) $(CFLAG) -I ../../include

clean:
	rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all

debug:	CFLAGS += -Og -s -g
debug:	re