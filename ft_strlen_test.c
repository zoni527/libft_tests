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

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*s;
	int		i;

	if (argc == 1)
		s = "Test string";
	else
		s = argv[1];
	if (argc > 2)
	{
		printf("\nUse program with 0 or 1 command line arguments\n\n");
		return (0);
	}
	i = 0;
	printf("\nString: %s\nstrlen:    %lu\nft_strlen: %lu\n",
			s, strlen(s), ft_strlen(s));
	printf("\n");
	return (0);
}
