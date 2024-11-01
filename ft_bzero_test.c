/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 15:31:41 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/31 15:37:10 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "../../Projects/Libft/libft.h"

#define BUFFER_SIZE 1024
#define INT_ARRAY_SIZE 10

void	print_int_array(int *array, int size);

int	main(int argc, char **argv)
{
	char	*s1 = "Test content";
	char	*s2 = "Test content";
	char	buffer1[BUFFER_SIZE];
	char	buffer2[BUFFER_SIZE];
	int		array1[INT_ARRAY_SIZE];
	int		array2[INT_ARRAY_SIZE];
	int		n = -1;
	int		i;

	if (argc > 1)
		s1 = argv[1];
	if (argc > 2)
		s2 = argv[2];
	if (argc > 3)
		n = atoi(argv[3]);
	if (argc > 4)
	{
		printf("\nProgram can be used with 0, 1, 2"
				" or 3 command line arguments\n\n");
		return (0);
	}

	memcpy(buffer1, s1, strlen(s1) + 1);
	memcpy(buffer2, s2, strlen(s2) + 1);
	printf("\nInitial state of character buffer 1:\t%s", buffer1);
	printf("\nInitial state of character buffer 2:\t%s", buffer2);
	if (n >= 0)
	{
		bzero(buffer1, n);
		ft_bzero(buffer2, n);
	}
	else
	{
		bzero(buffer1, strlen(s1));
		ft_bzero(buffer2, strlen(s2));
	}
	printf("\n\nAfter running bzero and ft_bzero:");
	printf("\n%s\n", "Buffer 1:");
	i = -1;
	while (++i < (int)strlen(s1) + 1)
		if (buffer1[i] == 0)
			printf("%3s", "\\0");
		else
			printf("%3c", buffer1[i]);
	printf("\n\n%s\n", "Buffer 2:");
	i = -1;
	while (++i < (int)strlen(s2) + 1)
		if (buffer2[i] == 0)
			printf("%3s", "\\0");
		else
			printf("%3c", buffer2[i]);
	i = -1;
	while (++i < INT_ARRAY_SIZE)
	{
		array1[i] = 1;
		array2[i] = 1;
	}
	printf("\n\nInt array 1 initial state:   ");
	print_int_array(array1, INT_ARRAY_SIZE);
	printf("Int array 2 initial state:   ");
	print_int_array(array2, INT_ARRAY_SIZE);
	bzero(array1, sizeof(array1));
	ft_bzero(array2, sizeof(array2));
	printf("Int array 1 after bzero:     ");
	print_int_array(array1, INT_ARRAY_SIZE);
	printf("Int array 2 after ft_bzero:  ");
	print_int_array(array2, INT_ARRAY_SIZE);
	printf("\n");
	return (0);
}

void	print_int_array(int *array, int size)
{
	int	i;

	i = -1;
	while (++i < size)
		printf("%d   ", array[i]);
	printf("\n");
}
