/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:33:26 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/30 09:42:20 by jvarila          ###   ########.fr       */
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
			printf("Character: %4c\tascii: %4d\tisascii: %4d\tft_isascii: %4d\n",
				i, i, isascii(i), ft_isascii(i));
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
		printf("Character: %4c\tascii: %4d\tisascii: %4d\tft_isascii: %4d\n",
			s[i], s[i], isascii(s[i]), ft_isascii(s[i]));
	}
	printf("--------------------------------------------------------------\n");
	printf("Extra tests\n");
	printf("Character: %4c\tascii: %4d\tisascii: %4d\tft_isascii: %4d\n",
		-1, -1, isascii(-1), ft_isascii(-1));
	printf("Character: %4c\tascii: %4d\tisascii: %4d\tft_isascii: %4d\n",
		0, 0, isascii(0), ft_isascii(0));
	printf("Character: %4c\tascii: %4d\tisascii: %4d\tft_isascii: %4d\n",
		127, 127, isascii(127), ft_isascii(127));
	printf("Character: %4c\tascii: %4d\tisascii: %4d\tft_isascii: %4d\n",
		255, 255, isascii(255), ft_isascii(255));
	printf("\n");
	return (0);
}
