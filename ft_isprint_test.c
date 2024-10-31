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
		printf("Character: %3c\tascii: %3d\tisprint: %3d\tft_isprint: %3d\n",
			s[i], s[i], isprint(s[i]), ft_isprint(s[i]));
	}
	printf("--------------------------------------------------------------\n");
	printf("Extra tests\n");
	printf("Character: %3c\tascii: %3d\tisprint: %3d\tft_isprint: %3d\n",
		-1, -1, isprint(-1), ft_isprint(-1));
	printf("Character: %3c\tascii: %3d\tisprint: %3d\tft_isprint: %3d\n",
		0, 0, isprint(0), ft_isprint(0));
	printf("Character: %3c\tascii: %3d\tisprint: %3d\tft_isprint: %3d\n",
		127, 127, isprint(127), ft_isprint(127));
	printf("Character: %3c\tascii: %3d\tisprint: %3d\tft_isprint: %3d\n",
		255, 255, isprint(255), ft_isprint(255));
	printf("\n");
	return (0);
}
