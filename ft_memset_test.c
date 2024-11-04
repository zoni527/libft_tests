/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/31 12:56:14 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/31 12:59:04 by jvarila          ###   ########.fr       */
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
	void	*void_ptr1;
	void	*void_ptr2;
	int		int_array1[INT_ARRAY_LENGTH] = {0};
	int		int_array2[INT_ARRAY_LENGTH] = {0};
	int		c;
	int		i;

	printf("\nFunction memset operates on buffer 1, ft_memset on buffer 2\n\n");
	printf("Setting all characters in buffers 1 and 2 to \\0\n");
	void_ptr1 = memset(buffer1, '\0', BUFFER_LENGTH);
	void_ptr2 = ft_memset(buffer2, '\0', BUFFER_LENGTH);
	printf("\nTest print of buffers (should be blank): %s%s\n\n", buffer1, buffer2);
	printf("%-30s%10p\n", "   memset return value:", void_ptr1);
	printf("%-30s%10p\n", "ft_memset return value:", void_ptr2);
	c = 'A';
	printf("\n\nSetting 10 characters in both buffers to %c\n", c);
	void_ptr1 = memset(buffer1, c, 10);
	void_ptr2 = ft_memset(buffer2, c, 10);
	printf("\nBuffer 1: %s\nBuffer 2: %s\n", buffer1, buffer2);

	printf(	"\n\nTesting memset and ft_memset on "	
			"two int arrays of size %d\n", INT_ARRAY_LENGTH);
	printf("\nArray 1 init state:\t");
	i = -1;
	while (++i < INT_ARRAY_LENGTH)
		printf("%4d", int_array1[i]);
	printf("\n");
	printf("Array 2 init state:\t");
	i = -1;
	while (++i < INT_ARRAY_LENGTH)
		printf("%4d", int_array2[i]);
	c = 10;
	printf("\n\nSetting all bytes in the int arrays to byte %d\n", c);
	void_ptr1 = memset(int_array1, c, sizeof(int_array1));
	void_ptr2 = ft_memset(int_array2, c, sizeof(int_array2));
	printf("\n%-25s", "Array 1 after memset:");
	i = -1;
	while (++i < INT_ARRAY_LENGTH)
		printf("%10d", int_array1[i]);
	printf("\n");
	printf("%-25s", "Array 2 after ft_memset:");
	i = -1;
	while (++i < INT_ARRAY_LENGTH)
		printf("%10d", int_array2[i]);
	printf("\n\n%-25s", "Array 1 in hex:");
	i = -1;
	while (++i < INT_ARRAY_LENGTH)
		printf("%#10x", int_array1[i]);
	printf("\n%-25s", "Array 2 in hex:");
	i = -1;
	while (++i < INT_ARRAY_LENGTH)
		printf("%#10x", int_array2[i]);
	printf("\n\n");
	return (0);
}
