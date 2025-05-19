# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 13:16:04 by jvarila           #+#    #+#              #
#    Updated: 2025/05/19 14:24:55 by jvarila          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ../
SRC = $(wildcard ./*.c)
TESTS = $(SRC:.c=)
# ---------------------------------------------------------------------------- #
all: $(TESTS)

all: $(TSTS) libft.a

$(TSTS): %:%.c libft.a libft.h
	$(CC) $(CFLAGS) $@.c -I. -L. -lft -lbsd -o $@

libft.a: $(LIBFT_DIR)/libft.a
	cp $< ./

libft.h: $(LIBFT_DIR)/libft.h
	cp $< ./

clean:
	rm -f libft.a libft.h

fclean: clean
	rm -f ./*_test

re: fclean all
# ---------------------------------------------------------------------------- #
.PHONY: clean fclean all re
# ---------------------------------------------------------------------------- #
