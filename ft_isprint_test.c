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
#include <ctype.h>
#include "../../Projects/Libft/libft.h"

int	main(int argc, char **argv)
{
	char	*s;
	int		i;

	if (argc == 1)
	{
		printf("\n\n");
		i = -2;
		while (++i < 129)
			printf("Character: %4c\tascii: %4d\tisprint: %4d\tft_isprint: %4d\n",
				i, i, isprint(i), ft_isprint(i));
		printf("\n");
		return (0);
	}
	if (argc == 2)
		s = argv[1];
	if (argc > 2)
	{
		printf ("\nUse 0 or 1 command line arguments\n\n");
		return (0);
	}
	printf("\nEvaluating each character in string: %s\n\n", s);
	i = -1;
	while (++i <= (int)strlen(s))
	{
		printf("Character: %4c\tascii: %4d\tisprint: %4d\tft_isprint: %4d\n",
			s[i], s[i], isprint(s[i]), ft_isprint(s[i]));
	}
	printf("\n");
	return (0);
}
