##
## EPITECH PROJECT, 2017
## CPE_Pushswap_2017
## File description:
## Makefile
##

NAME	=	bsq

SRC	=	src/main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I include/ -Wextra -Wall

LIBDIR	=	lib/

LIBS	=	-L $(LIBDIR) -lmy

CC	=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C $(LIBDIR)my
	$(CC) $(OBJ) -o $(NAME) $(LIBS)

clean:
	$(MAKE) clean -C $(LIBDIR)my
	rm -f $(OBJ)

fclean:	clean
	$(MAKE) fclean -C $(LIBDIR)my
	rm -f $(NAME)

re:	fclean all

debug:	CFLAGS += -O0 -s -g
debug:	re

opti:	CFLAGS += -O3
opti:	re
