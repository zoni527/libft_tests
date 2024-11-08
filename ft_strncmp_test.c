/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:49:27 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/31 09:49:21 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		s1_len;
	int		s2_len;
	int		n;
	int		i;

	n = -1;
	s1 = "abc";
	s2 = "abcd";

	if (argc > 1)
	{
		s1 = argv[1];
		s2 = argv[1];
	}
	if (argc > 2)
		s2 = argv[2];
	if (argc > 3)
		n = atoi(argv[3]);
	if (argc > 4)
		return (0);

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	printf("\ns1: %s\ns2: %s\n\n", s1, s2);
	if (n < 0)
	{
		i = 0;
		while (i <= s1_len || i <= s2_len)
		{
			printf("%-15s%3d\n", "n:", i);
			printf("%-15s%3d\n", "strncmp:", strncmp(s1, s2, i));
			printf("%-15s%3d\n", "ft_strncmp:", ft_strncmp(s1, s2, i));
			printf("\n");
			i++;
		}
	}
	else {
		printf("%20s%3d\n", "n:", n);
		printf("%20s%3d\n", "strncmp:", strncmp(s1, s2, n));
		printf("%20s%3d\n", "ft_strncmp:", ft_strncmp(s1, s2, n));
		printf("\n");
	}
	s1 = "test\200";
	s2 = "test\0";
	printf("\ns1: %s\ns2: %s\n\n", s1, s2);
	printf("%-15s%3d\n", "n:", 6);
	printf("%-15s%3d\n", "strncmp:", strncmp(s1, s2, 6));
	printf("%-15s%3d\n", "ft_strncmp:", ft_strncmp(s1, s2, 6));
	printf("\n");
	return (0);
}
