/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:56:14 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/31 17:56:16 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../Projects/Libft/libft.h"
#include <stdio.h>
#include <string.h>

#define BUFFER_LENGTH 1024
#define INT_ARRAY_LENGTH 10

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;
	char	buffer1[BUFFER_LENGTH];
	char	buffer2[BUFFER_LENGTH];
	char	*s1;
	char	*s2;
	void	*void_ptr1;
	void	*void_ptr2;
	int		int_array1[INT_ARRAY_LENGTH] = {0};
	int		int_array2[INT_ARRAY_LENGTH] = {0};
	int		n = -1;
	int		i;

	memset(buffer1, 0, BUFFER_LENGTH);
	memset(buffer2, 0, BUFFER_LENGTH);
	(void)int_array1;
	(void)int_array2;
	s1 = "abcdefghijklmnop";
	s2 = "ABCDEFGHIJKLMNOP";
	if (argc > 1)
		s1 = argv[1];
	if (argc > 2)
		s2 = argv[2];
	if (argc > 3)
		n = atoi(argv[3]);
	if (argc > 4)
	{
		printf("\nThe program works with 0, 1, or 2 command line arguments\n\n");
		return (0);
	}

	printf("\n%-10s%s\n", "String 1:", s1);
	printf("%-10s%s\n", "String 2:", s2);
	i = -1;
	memcpy(buffer1, s1, strlen(s1) + 1);
	memcpy(buffer2, s1, strlen(s1) + 1);

	printf("\n");
	i = 0;
	while (i <= (int)strlen(s1) + 1 || i <= (int)strlen(s2) + 1)
	{
		void_ptr1 = memmove(buffer1, s2, i);
		void_ptr2 = ft_memmove(buffer2, s2, i);
		printf("%-3s%3d%25s%17p%20s%-20s\n", "n:", i, "memcpy return val:", void_ptr1, "buffer 1:   ", buffer1);
		printf("%-3s%3d%25s%17p%20s%-20s\n", "  ", i, "ft_memcpy return val:", void_ptr2, "buffer 2:   ", buffer2);
		i++;
	}
	printf("\n");
	return (0);
}
