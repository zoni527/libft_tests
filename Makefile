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

$(LIB): $(LIBFOLDER)$(LIB)
	cp $< ./

fclean:
	rm -f ./*_test

clean:

re: fclean all

.PHONY: clean fclean all re
