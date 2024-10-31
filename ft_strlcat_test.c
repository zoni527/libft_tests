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

#include <stdio.h>
#include <string.h>
#include <bsd/string.h>
#include "../../Projects/Libft/libft.h"
#define BUFFER_LENGTH 1024

int	main(int argc, char **argv)
{
	char	*s1;
	char	*s2;
	int		i;
	int		j;
	char	dest1[BUFFER_LENGTH];
	char	dest2[BUFFER_LENGTH];
	size_t	output1;
	size_t	output2;

	if (argc != 3)
	{
		printf("Please give 2 argument\n");
		return (0);
	}
	i = 0;
	s1 = argv[1];
	s2 = argv[2];
	strcpy(dest1, s1);
	strcpy(dest2, s1);
	printf(	"\nDestination string: %s\n"
			"Source string: %s\n"
			"-----------------------------------------------------------\n",
			s1, s2);
	j = -1;
	while (++j < (int)strlen(s1) + (int)strlen(s2) + 3)
	{
		output1 = strlcat(dest1, s2, j);
		output2 = ft_strlcat(dest2, s2, j);
		printf(
			"Size to copy:\t\t%d\n"
			"strlcat output:\t\t%lu\n"
			"ft_strlcat output:\t%lu\n"
			"strlcat dest:\t\t%s\n"
			"ft_strlcat dest:\t%s\n"
			"-----------------------------------------------------------\n",
			j, output1, output2, dest1, dest2);
		dest1[0] = '\0';
		strcat(dest1, s1);
		dest2[0] = '\0';
		strcat(dest2, s1);
	}
	return (0);
}
