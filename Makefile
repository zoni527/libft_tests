# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 13:16:04 by jvarila           #+#    #+#              #
#    Updated: 2024/11/06 11:06:58 by jvarila          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIB = libft.a
SRC = $(wildcard ./*.c)
OBJ = $(SRC:.c=.o)
TSTS = $(SRC:.c="")

all: $(LIB) $(SRC) $(SRC:.c=)

$(SRC:.c=): %:%.c
	$(CC) $(CFLAGS) $@.c -L. -l:$(LIB) -lbsd -o $@

.PHONY: clean fclean

fclean:
	rm -f ./*_test

clean:
