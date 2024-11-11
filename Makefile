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
LIBFOLDER = ../../Projects/libft/
SRC = $(wildcard ./*.c)
TSTS = $(SRC:.c=)

all: $(TSTS) $(LIB)

$(TSTS): %:%.c $(LIB)
	$(CC) $(CFLAGS) $@.c -L. -l:$(LIB) -lbsd -o $@

.PHONY: clean fclean all

fclean:
	rm -f ./*_test

clean:

$(LIB): $(LIBFOLDER)libft.a
	cp $< ./

$(LIBFOLDER)libft.a:
