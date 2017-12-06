##
## EPITECH PROJECT, 2017
## CPE_Pushswap_2017
## File description:
## Makefile
##

NAME	=	bsq

SRC	=	src/main.c \
		src/bsq.c \
		src/map.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-I include/ -Wextra -Wall

LIBDIR	=	lib/my

LIBS	=	-L $(LIBDIR) -lmy

CC	=	gcc

all:	$(NAME)

$(NAME):	$(OBJ)
	$(MAKE) -C $(LIBDIR)
	$(CC) $(OBJ) -o $(NAME) $(LIBS)

clean:
	$(MAKE) clean -C $(LIBDIR)
	rm -f $(OBJ)

fclean:	clean
	$(MAKE) fclean -C $(LIBDIR)
	rm -f $(NAME)

re:	fclean all

debug:	CFLAGS += -O0 -s -g
debug:	re

opti:	CFLAGS += -O3
opti:	re
