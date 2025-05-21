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
:c
LIBFT_DIR = /home/jvarila/Repos/libft
SRC = $(wildcard ./*.c)
TESTS = $(SRC:.c=)
# ---------------------------------------------------------------------------- #
all: $(TESTS)

$(TESTS): %: %.c $(LIBFT_DIR)/libft.a $(LIBFT_DIR)/libft.h
	$(CC) $(CFLAGS) $@.c -I$(LIBFT_DIR) -lbsd -L$(LIBFT_DIR) -lft -o $@

$(LIBFT_DIR)/libft.a:
	make -C $(LIBFT_DIR)

clean:

fclean: clean
	rm -f ./*_test

re: fclean all
# ---------------------------------------------------------------------------- #
.PHONY: clean fclean all re
# ---------------------------------------------------------------------------- #
