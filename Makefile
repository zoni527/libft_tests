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

ft_isdigit_test: ft_isdigit_test.o $(SRC)ft_isdigit.o
	$(CC) $(CFLAGS) -o ft_isdigit_test ft_isdigit_test.o $(SRC)ft_isdigit.o

ft_isdigit_test.o: ft_isdigit_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_isdigit_test.c

$(SRC)ft_isdigit.o: $(SRC)ft_isdigit.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_isdigit.c -o $(SRC)ft_isdigit.o

ft_isalpha_test: ft_isalpha_test.o $(SRC)ft_isalpha.o
	$(CC) $(CFLAGS) -o ft_isalpha_test ft_isalpha_test.o $(SRC)ft_isalpha.o

ft_isalpha_test.o: ft_isalpha_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_isalpha_test.c

$(SRC)ft_isalpha.o: $(SRC)ft_isalpha.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_isalpha.c -o $(SRC)ft_isalpha.o

ft_isalnum_test: ft_isalnum_test.o $(SRC)ft_isalnum.o
	$(CC) $(CFLAGS) -o ft_isalnum_test ft_isalnum_test.o $(SRC)ft_isalnum.o

ft_isalnum_test.o: ft_isalnum_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_isalnum_test.c

$(SRC)ft_isalnum.o: $(SRC)ft_isalnum.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_isalnum.c -o $(SRC)ft_isalnum.o

ft_isascii_test: ft_isascii_test.o $(SRC)ft_isascii.o
	$(CC) $(CFLAGS) -o ft_isascii_test ft_isascii_test.o $(SRC)ft_isascii.o

ft_isascii_test.o: ft_isascii_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_isascii_test.c

$(SRC)ft_isascii.o: $(SRC)ft_isascii.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_isascii.c -o $(SRC)ft_isascii.o

ft_isprint_test: ft_isprint_test.o $(SRC)ft_isprint.o
	$(CC) $(CFLAGS) -o ft_isprint_test ft_isprint_test.o $(SRC)ft_isprint.o

ft_isprint_test.o: ft_isprint_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_isprint_test.c

$(SRC)ft_isprint.o: $(SRC)ft_isprint.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_isprint.c -o $(SRC)ft_isprint.o

ft_strlen_test: ft_strlen_test.o $(SRC)ft_strlen.o
	$(CC) $(CFLAGS) -o ft_strlen_test ft_strlen_test.o $(SRC)ft_strlen.o

ft_strlen_test.o: ft_strlen_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_strlen_test.c

$(SRC)ft_strlen.o: $(SRC)ft_strlen.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_strlen.c -o $(SRC)ft_strlen.o

ft_strlcpy_test: ft_strlcpy_test.o $(SRC)ft_strlcpy.o $(SRC)ft_strlen.o
	$(CC) $(CFLAGS) -o ft_strlcpy_test ft_strlcpy_test.o $(SRC)ft_strlcpy.o $(SRC)ft_strlen.o -lbsd

ft_strlcpy_test.o: ft_strlcpy_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_strlcpy_test.c

$(SRC)ft_strlcpy.o: $(SRC)ft_strlcpy.c $(SRC)ft_strlen.o $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_strlcpy.c -o $(SRC)ft_strlcpy.o 

ft_strlcat_test: ft_strlcat_test.o $(SRC)ft_strlcat.o $(SRC)ft_strlen.o
	$(CC) $(CFLAGS) -o ft_strlcat_test ft_strlcat_test.o $(SRC)ft_strlcat.o $(SRC)ft_strlen.o -lbsd

ft_strlcat_test.o: ft_strlcat_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_strlcat_test.c

$(SRC)ft_strlcat.o: $(SRC)ft_strlcat.c $(SRC)ft_strlen.o $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_strlcat.c -o $(SRC)ft_strlcat.o 

ft_toupper_test: ft_toupper_test.o $(SRC)ft_toupper.o
	$(CC) $(CFLAGS) -o ft_toupper_test ft_toupper_test.o $(SRC)ft_toupper.o

ft_toupper_test.o: ft_toupper_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_toupper_test.c

$(SRC)ft_toupper.o: $(SRC)ft_toupper.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_toupper.c -o $(SRC)ft_toupper.o

ft_tolower_test: ft_tolower_test.o $(SRC)ft_tolower.o
	$(CC) $(CFLAGS) -o ft_tolower_test ft_tolower_test.o $(SRC)ft_tolower.o

ft_tolower_test.o: ft_tolower_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_tolower_test.c

$(SRC)ft_tolower.o: $(SRC)ft_tolower.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_tolower.c -o $(SRC)ft_tolower.o

ft_strncmp_test: ft_strncmp_test.o $(SRC)ft_strncmp.o
	$(CC) $(CFLAGS) -o ft_strncmp_test ft_strncmp_test.o $(SRC)ft_strncmp.o

ft_strncmp_test.o: ft_strncmp_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_strncmp_test.c

$(SRC)ft_strncmp.o: $(SRC)ft_strncmp.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_strncmp.c -o $(SRC)ft_strncmp.o

ft_memset_test: ft_memset_test.o $(SRC)ft_memset.o
	$(CC) $(CFLAGS) -o ft_memset_test ft_memset_test.o $(SRC)ft_memset.o

ft_memset_test.o: ft_memset_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_memset_test.c

$(SRC)ft_memset.o: $(SRC)ft_memset.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_memset.c -o $(SRC)ft_memset.o

ft_bzero_test: ft_bzero_test.o $(SRC)ft_bzero.o
	$(CC) $(CFLAGS) -o ft_bzero_test ft_bzero_test.o $(SRC)ft_bzero.o

ft_bzero_test.o: ft_bzero_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_bzero_test.c

$(SRC)ft_bzero.o: $(SRC)ft_bzero.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_bzero.c -o $(SRC)ft_bzero.o

ft_memcpy_test: ft_memcpy_test.o $(SRC)ft_memcpy.o
	$(CC) $(CFLAGS) -o ft_memcpy_test ft_memcpy_test.o $(SRC)ft_memcpy.o

ft_memcpy_test.o: ft_memcpy_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_memcpy_test.c

$(SRC)ft_memcpy.o: $(SRC)ft_memcpy.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_memcpy.c -o $(SRC)ft_memcpy.o

ft_memmove_test: ft_memmove_test.o $(SRC)ft_memmove.o
	$(CC) $(CFLAGS) -o ft_memmove_test ft_memmove_test.o $(SRC)ft_memmove.o

ft_memmove_test.o: ft_memmove_test.c $(HF)
	$(CC) $(CFLAGS) -c ft_memmove_test.c

$(SRC)ft_memmove.o: $(SRC)ft_memmove.c $(HF)
	$(CC) $(CFLAGS) -c $(SRC)ft_memmove.c -o $(SRC)ft_memmove.o

fclean: clean
	rm ./*_test

clean:
	rm $(SRC)*.o *.o
