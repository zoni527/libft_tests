# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/30 13:16:04 by jvarila           #+#    #+#              #
#    Updated: 2024/10/30 13:16:09 by jvarila          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = cc
CFLAGS = -Wall -Wextra -Werror
SRC = ../../Projects/Libft/
HF = ../../Projects/Libft/libft.h
CFILES = ../../Projects/Libft/*.c
OFILES = $(CFILES:.c=.o)

all:	ft_isalpha_test	\
	ft_isdigit_test	\
	ft_isalnum_test	\
	ft_isascii_test	\
	ft_isprint_test	\
	ft_strlen_test	\
	ft_strlcpy_test	\
	ft_strlcat_test	\
	ft_toupper_test	\
	ft_tolower_test	\
	ft_strncmp_test	\
	ft_memset_test	\
	ft_bzero_test	\
	ft_memcpy_test	\
	ft_memmove_test	\
	ft_isprint_test	\
	ft_strchr_test	\
	ft_strrchr_test	\
	ft_memchr_test	\
	ft_memcmp_test	\
	ft_strnstr_test	\
	ft_atoi_test

ft_isdigit_test: ft_isdigit_test.c $(SRC)ft_isdigit.c $(HF)
	$(CC) $(CFLAGS) -o ft_isdigit_test ft_isdigit_test.c $(SRC)ft_isdigit.c

ft_isalpha_test: ft_isalpha_test.c $(SRC)ft_isalpha.c $(HF)
	$(CC) $(CFLAGS) -o ft_isalpha_test ft_isalpha_test.c $(SRC)ft_isalpha.c

ft_isalnum_test: ft_isalnum_test.c $(SRC)ft_isalnum.c $(HF)
	$(CC) $(CFLAGS) -o ft_isalnum_test ft_isalnum_test.c $(SRC)ft_isalnum.c

ft_isascii_test: ft_isascii_test.c $(SRC)ft_isascii.c
	$(CC) $(CFLAGS) -o ft_isascii_test ft_isascii_test.c $(SRC)ft_isascii.c

ft_isprint_test: ft_isprint_test.c $(SRC)ft_isprint.c
	$(CC) $(CFLAGS) -o ft_isprint_test ft_isprint_test.c $(SRC)ft_isprint.c

ft_strlen_test: ft_strlen_test.c $(SRC)ft_strlen.c
	$(CC) $(CFLAGS) -o ft_strlen_test ft_strlen_test.c $(SRC)ft_strlen.c

ft_strlcpy_test: ft_strlcpy_test.c $(SRC)ft_strlcpy.c $(SRC)ft_strlen.c
	$(CC) $(CFLAGS) -o ft_strlcpy_test ft_strlcpy_test.c $(SRC)ft_strlcpy.c $(SRC)ft_strlen.c -lbsd

ft_strlcat_test: ft_strlcat_test.c $(SRC)ft_strlcat.c $(SRC)ft_strlen.c
	$(CC) $(CFLAGS) -o ft_strlcat_test ft_strlcat_test.c $(SRC)ft_strlcat.c $(SRC)ft_strlen.c -lbsd

ft_toupper_test: ft_toupper_test.c $(SRC)ft_toupper.c
	$(CC) $(CFLAGS) -o ft_toupper_test ft_toupper_test.c $(SRC)ft_toupper.c

ft_tolower_test: ft_tolower_test.c $(SRC)ft_tolower.c
	$(CC) $(CFLAGS) -o ft_tolower_test ft_tolower_test.c $(SRC)ft_tolower.c

ft_strncmp_test: ft_strncmp_test.c $(SRC)ft_strncmp.c
	$(CC) $(CFLAGS) -o ft_strncmp_test ft_strncmp_test.c $(SRC)ft_strncmp.c

ft_memset_test: ft_memset_test.c $(SRC)ft_memset.c
	$(CC) $(CFLAGS) -o ft_memset_test ft_memset_test.c $(SRC)ft_memset.c

ft_bzero_test: ft_bzero_test.c $(SRC)ft_bzero.c
	$(CC) $(CFLAGS) -o ft_bzero_test ft_bzero_test.c $(SRC)ft_bzero.c

ft_memcpy_test: ft_memcpy_test.c $(SRC)ft_memcpy.c
	$(CC) $(CFLAGS) -o ft_memcpy_test ft_memcpy_test.c $(SRC)ft_memcpy.c

ft_memmove_test: ft_memmove_test.c $(SRC)ft_memmove.c
	$(CC) $(CFLAGS) -o ft_memmove_test ft_memmove_test.c $(SRC)ft_memmove.c

fclean:
	rm ./*_test

clean:

