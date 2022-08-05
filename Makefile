# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hamchur <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/11 19:10:38 by hamchur           #+#    #+#              #
#    Updated: 2021/10/25 15:29:17 by hamchur          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRC = $(shell find . -name "*.c")

SRCB = $(shell find . -name "*_bonus.c")

OBJ = ${SRC:.c=.o}

OBJB = ${SRCB:.c=.o}

CFLAGS = -Wall -Werror -Wextra

COMPILE = gcc $(CFLAGS) -c

LIB = ar rc $(NAME)

RANLIB = ranlib $(NAME)

REMOVE = rm -f

all: $(NAME)
$(NAME):
	@$(COMPILE) $(SRC)
	@$(LIB) $(OBJ)
	@$(RANLIB)

bonus:
	@$(COMPILE) $(SRC) $(SRCB)
	@$(LIB) $(OBJ) $(OBJB)
	@$(RANLIB)

clean:
	@$(REMOVE) $(OBJ) $(OBJB)

fclean: clean
	@$(REMOVE) $(NAME)

re: fclean all

so:
	gcc -fPIC -c $(SRC)
	gcc -shared -Wl,-soname,libft.so -o libft.so *.o

.PHONY: all clean fclean re
