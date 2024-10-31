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
		s = "Test string 0123456789 abcxyz ABCXYZ !#|~";
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
		printf("Character: %3c\tascii: %3d\tisascii: %3d\tft_isascii: %3d\n",
			s[i], s[i], isascii(s[i]), ft_isascii(s[i]));
	}
	printf("--------------------------------------------------------------\n");
	printf("Extra tests\n");
	printf("Character: %3c\tascii: %3d\tisascii: %3d\tft_isascii: %3d\n",
		-1, -1, isascii(-1), ft_isascii(-1));
	printf("Character: %3c\tascii: %3d\tisascii: %3d\tft_isascii: %3d\n",
		0, 0, isascii(0), ft_isascii(0));
	printf("Character: %3c\tascii: %3d\tisascii: %3d\tft_isascii: %3d\n",
		127, 127, isascii(127), ft_isascii(127));
	printf("Character: %3c\tascii: %3d\tisascii: %3d\tft_isascii: %3d\n",
		255, 255, isascii(255), ft_isascii(255));
	printf("\n");
	return (0);
}
