/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:02:53 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/07 14:10:05 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
void	f(unsigned int i, char *c)
{
	(void)i;
	*c = 'f';
}

int	main(int argc, char **argv)
{
	char	*s =	"abcdefghijklmnopqrstuvwxyz\n"
					"ABCDEFGHIJKLMNOPQRSTUVWXYZ\n"
					"01234567890\n"
					"!@#$%^&*()~`_-+=[]{}|\\;:'\",.<>/?";

	s = ft_strdup(s);
	if (argc > 1)
	{
		free(s);
		s = ft_strdup(argv[1]);
	}
	if (argc > 2)
	{
		printf("\nThe program works with 0 or 1 command line arguments\n\n");
		free(s);
		return (0);
	}

	printf("\n%15s\n%15s\n", "s:", s);
	ft_striteri(s, f);
	printf("\n%15s\n%15s\n", "s:", s);
	printf("\n");
	free(s);
	return (0);
}
