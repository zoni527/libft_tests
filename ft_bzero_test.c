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

#include <stdio.h>
#include <strings.h>
#include "../../Projects/Libft/libft.h"

#define BUFFER_SIZE 10
#define INT_ARRAY_SIZE 10

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	char	buffer1[BUFFER_SIZE];
	char	buffer2[BUFFER_SIZE];
	int		array1[INT_ARRAY_SIZE];
	int		array2[INT_ARRAY_SIZE];

	int		i;

	bzero(buffer1, BUFFER_SIZE);
	ft_bzero(buffer2, BUFFER_SIZE);
	bzero(array1, sizeof(array1));
	ft_bzero(array2, sizeof(array2));
	printf("\n\n%s\n", "Buffer 1:");
	i = -1;
	while (++i < BUFFER_SIZE)
		if (buffer1[i] == 0)
		printf("%3s", "\\0");
	printf("\n\n%s\n", "Buffer 2:");
	i = -1;
	while (++i < BUFFER_SIZE)
		if (buffer2[i] == 0)
		printf("%3s", "\\0");
	printf("\n\n");
	return (0);
}
