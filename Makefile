# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 13:16:04 by jvarila           #+#    #+#              #
#    Updated: 2025/04/25 14:35:38 by jvarila          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror -g
# ---------------------------------------------------------------------------- #
LIBFT = libft.a
LIBFT_H = libft.h
LIBFT_FOLDER = ..
LIBFT_H_FOLDER = ..
# ---------------------------------------------------------------------------- #
SRC = $(wildcard ./*.c)
TESTS = $(SRC:.c=)
# ---------------------------------------------------------------------------- #
all: $(TESTS)

$(TESTS): %: %.c $(LIBFT) $(LIBFT_H)
	$(CC) $(CFLAGS) $< -lbsd $(LIBFT) -o $@

$(LIBFT): $(LIBFT_FOLDER)/$(LIBFT)
	cp $(LIBFT_FOLDER)/$(LIBFT) $@

$(LIBFT_H): $(LIBFT_H_FOLDER)/$(LIBFT_H)
	cp $(LIBFT_H_FOLDER)/$(LIBFT_H) $@

clean:
	rm -f $(LIBFT)
	rm -f $(LIBFT_H)
	rm -f $(TESTS)

fclean: clean

re: fclean all
# ---------------------------------------------------------------------------- #
.PHONY: clean fclean all re
# ---------------------------------------------------------------------------- #
