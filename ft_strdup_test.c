/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:01:02 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/06 13:17:03 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*s;
	char	*rval;
	char	*ft_rval;

	s = "abcdefghijklmnop";

	if (argc > 1)
		s = argv[1];
	if (argc > 2)
	{
		printf("\nThe program works with 0 or 1 command line arguments\n\n");
		return (0);
	}

	printf("\n%10s%s\n", "String: ", s);
	rval = strdup(s);
	ft_rval = ft_strdup(s);
	printf("\n%10s%s", "rval: ", rval);
	printf("\n%10s%s\n", "ft_rval: ", ft_rval);
	printf("\n");
	free(rval);
	free(ft_rval);
	return (0);
}
