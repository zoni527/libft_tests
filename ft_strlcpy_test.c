/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:33:26 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/30 13:35:48 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#define BUFFER_LENGTH 1024

int	main(int argc, char **argv)
{
	char	*s;
	int		i;
	int		j;
	char	dest1[BUFFER_LENGTH];
	char	dest2[BUFFER_LENGTH];
	size_t	output1;
	size_t	output2;

	if (argc != 2)
	{
		printf("Please give 1 argument\n");
		return (0);
	}
	i = 0;
	while (++i < argc)
	{
		s = argv[i];
		printf(	"\nInput string: %s\n"
				"-----------------------------------------------------------\n",
				s);
		j = -1;
		while (++j < (int)strlen(s) + 3)
		{
			output1 = strlcpy(dest1, s, j);
			output2 = ft_strlcpy(dest2, s, j);
			printf(
				"Size to copy:\t\t%d\n"
				"strlcpy output:\t\t%lu\n"
				"ft_strlcpy output:\t%lu\n"
				"strlcpy dest:\t\t%s\n"
				"ft_strlcpy dest:\t%s\n"
				"-----------------------------------------------------------\n",
				j, output1, output2, dest1, dest2);
		}
	}
	return (0);
}
