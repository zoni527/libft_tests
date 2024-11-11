/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:43:29 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/05 17:52:10 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

#define BUFFER_LENGTH 1024
#define INT_ARRAY_LENGTH 10

int	main(int argc, char **argv)
{
	char	buffer1[BUFFER_LENGTH];
	char	buffer2[BUFFER_LENGTH];
	char	*s1;
	char	*s2;
	char	*rval1;
	char	*rval2;
	int		n = -1;
	int		i;

	memset(buffer1, 0x00000041, BUFFER_LENGTH);
	memset(buffer2, 0x00000042, BUFFER_LENGTH);
	s1 = "abcdefghijklmnop";
	s2 = "ghijk";

	if (argc > 1)
		s1 = argv[1];
	if (argc > 2)
		s2 = argv[2];
	if (argc > 3)
		n = atoi(argv[3]);
	if (argc > 4)
	{
		printf("\nThe program works with 0, 1, 2 or 3 command line arguments\n\n");
		return (0);
	}

	printf("\n");
	printf("%-10s%s\n", "String 1:", s1);
	printf("%-10s%s\n", "String 2:", s2);
	if (strlen(s1) > strlen(s2) && argc != 4)
		n = strlen(s1);
	else if (strlen(s2) <= strlen(s2) && argc != 4)
		n = strlen(s2);
	printf("\n%10s%15s%15s\n", "i", "strnstr", "ft_strnstr");
	printf("------------------------------------------\n");
	i = -1;
	while (++i < n + 2)
	{
		rval1 = strnstr(s1, s2, i);
		rval2 = ft_strnstr(s1, s2, i);
		printf("%10d%15s%15s\n", i, rval1, rval2);
	}
	printf("\n");
	return (0);
}
