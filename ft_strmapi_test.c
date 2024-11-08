/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 12:45:46 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/07 13:48:04 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

char	ft_toupper_i(unsigned int i, char c)
{
	(void)i;
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

int	main(int argc, char **argv)
{
	char	*s =	"abcdefghijklmnopqrstuvwxyz\n"
					"ABCDEFGHIJKLMNOPQRSTUVWXYZ\n"
					"01234567890\n"
					"!@#$%^&*()~`_-+=[]{}|\\;:'\",.<>/?";
	char	*ft_rval;

	if (argc > 1)
	{
		s = ft_strdup(argv[1]);
	}
	if (argc > 2)
	{
		printf("\nThe program works with 0 or 1 command line arguments\n\n");
		free(s);
		return (0);
	}

	printf("\n%15s\n%15s\n", "s:", s);
	ft_rval = ft_strmapi(s, ft_toupper_i);
	printf("\n%15s\n%15s\n","ft_rval:", ft_rval);
	printf("\n");
	free(ft_rval);
	if (argc > 1)
		free(s);
	return (0);
}
