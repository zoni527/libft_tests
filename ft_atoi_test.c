/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:33:26 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/30 10:16:14 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include "libft.h"

int	main(int argc, char **argv)
{
	char *test_strings[] = {	"0",
								"01",
								"00001",
								"1",
								"-1",
								"+1",
								"+-1",
								"-+1",
								" 1",
								" +1",
								"	1",
								"\n1",
								"	-42",
								"2147483647",
								"-2147483648",
								"2147483648",
								"-2147483649",
								"9223372036854775807",
								"9223372036854775808",
								"-9223372036854775808",
								"-9223372036854775809",
								"10000000000000000000",
								"-10000000000000000000",
								"10000000000000000000000000000000000000000000",
								"-10000000000000000000000000000000000000000000",
								NULL
	};
	char	*s;
	int		i;

	i = -1;
	if (argc == 1)
	{
		while (test_strings[++i])
		{
			s = test_strings[i];
			printf(	"\n%-15s%s\n%-15s%d\n%-15s%d\n",
					"Test string:", s, "   atoi:", atoi(s), "ft_atoi:", ft_atoi(s));
		}
	}
	if (argc == 2)
		s = argv[1];
	if (argc > 2)
	{
		printf ("\nUse 0 or 1 command line arguments\n\n");
		return (0);
	}
	printf(	"\n%-15s%s\n%-15s%d\n%-15s%d\n",
			"Test string:", s, "   atoi:   ", atoi(s), "ft_atoi:   ", ft_atoi(s));
	printf("\n");
	return (0);
}
