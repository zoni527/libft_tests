/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 14:33:26 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/29 15:32:13 by jvarila          ###   ########.fr       */
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
			printf("Character: %4c\tascii: %4d\tisalpha: %4d\tft_isalpha: %4d\n",
				i, i, isalpha(i), ft_isalpha(i));
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
		printf("Character: %4c\tascii: %4d\tisalpha: %4d\tft_isalpha: %4d\n",
			s[i], s[i], isalpha(s[i]), ft_isalpha(s[i]));
	}
	printf("--------------------------------------------------------------\n");
	printf("Extra tests\n");
	printf("Character: %4c\tascii: %4d\tisalpha: %4d\tft_isalpha: %4d\n",
		-1, -1, isalpha(-1), ft_isalpha(-1));
	printf("Character: %4c\tascii: %4d\tisalpha: %4d\tft_isalpha: %4d\n",
		0, 0, isalpha(0), ft_isalpha(0));
	printf("Character: %4c\tascii: %4d\tisalpha: %4d\tft_isalpha: %4d\n",
		127, 127, isalpha(127), ft_isalpha(127));
	printf("Character: %4c\tascii: %4d\tisalpha: %4d\tft_isalpha: %4d\n",
		255, 255, isalpha(255), ft_isalpha(255));
	printf("\n");
	return (0);
}
