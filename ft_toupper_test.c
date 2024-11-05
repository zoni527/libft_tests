/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:49:27 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/30 17:03:28 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*s;
	int		c;
	int		i;

	if (argc == 1)
		s = "The quick brown fox jumps over the lazy e-dog, 09, az, AZ, !#@+";
	else if (argc == 2)
		s = argv[1];
	else
	{
		printf("The program can be used with 0 or 1 command line arguments\n");
		return (0);
	}
	printf("\n%-25s%s\n","Test string:", s);
	printf("%-25s", "Test string capitalized:");
	i = -1;
	while (++i < (int)strlen(s))
	{
		c = ft_toupper(s[i]);
		printf("%c", c);
	}
	printf("\n\n");
	return (0);
}
