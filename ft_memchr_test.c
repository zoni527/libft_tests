/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 09:17:16 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/06 09:24:07 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

#define BUFFER_LENGTH 1024
#define INT_ARRAY_LENGTH 10

void	ft_print_int_array(int *array, int n);

int	main(int argc, char **argv)
{
	void	*rval1;
	void	*rval2;
	int		int_array[INT_ARRAY_LENGTH] = {0};
	int		c;
	int		n;
	int		i;

	c = 4;
	// if (argc > 1)
	if (argc == 2)
		c = atoi(argv[1]);
	// if (argc > 3)
	if (argc > 2)
	{
		printf("\nThe program works with 0 or 1 command line arguments\n\n");
		return (0);
	}

	i = -1;
	while (++i < INT_ARRAY_LENGTH)
		int_array[i] = i;
	printf("\n%-10s", "Int array:\t");
	ft_print_int_array(int_array, INT_ARRAY_LENGTH);
	printf("\nc: %d\n", c);
	printf("\n%10s%20s%20s\n", "n", "memchr", "ft_memchr");
	printf("---------------------------------------------------\n");
	n = sizeof(int_array);
	i = -2;
	while (++i < n + 1)
	{
		rval1 = memchr(int_array, c, i);
		rval2 = ft_memchr(int_array, c, i);
		printf("%10d%20p%20p\n", i, rval1, rval2);
	}
	printf("\n");
	return (0);
}

void	ft_print_int_array(int *array, int n)
{
	int	i;

	i = -1;
	while (++i < n)
		printf("%-5d", array[i]);
	printf("\n");
}
