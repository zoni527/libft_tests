/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:33:26 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/30 09:35:29 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int	main(int argc, char **argv)
{
	char	*s;
	int		i;

	if (argc == 1)
	{
		printf("\n\n");
		i = -2;
		while (++i < 129)
			printf("Character: %4c\tascii: %4d\tisdigit: %4d\tft_isdigit: %4d\n",
				i, i, isdigit(i), ft_isdigit(i));
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
		printf("Character: %4c\tascii: %4d\tisdigit: %4d\tft_isdigit: %4d\n",
			s[i], s[i], isdigit(s[i]), ft_isdigit(s[i]));
	}
	printf("--------------------------------------------------------------\n");
	printf("Extra tests\n");
	printf("Character: %4c\tascii: %4d\tisdigit: %4d\tft_isdigit: %4d\n",
		-1, -1, isdigit(-1), ft_isdigit(-1));
	printf("Character: %4c\tascii: %4d\tisdigit: %4d\tft_isdigit: %4d\n",
		0, 0, isdigit(0), ft_isdigit(0));
	printf("Character: %4c\tascii: %4d\tisdigit: %4d\tft_isdigit: %4d\n",
		127, 127, isdigit(127), ft_isdigit(127));
	printf("Character: %4c\tascii: %4d\tisdigit: %4d\tft_isdigit: %4d\n",
		255, 255, isdigit(255), ft_isdigit(255));
	printf("\n");
	return (0);
}
