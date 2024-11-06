/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 13:20:58 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/06 13:58:34 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main(int argc, char **argv)
{
	char	*str;
	size_t	len;
	size_t	start;
	char	*ft_rval;

	str = "abcdefghijklmnop";
	start = 9;
	len = 3;

	if (argc > 1)
		str = argv[1];
	if (argc > 2)
		start = atoi(argv[2]);
	if (argc > 3)
		len = atoi(argv[3]);
	if (argc > 4)
	{
		printf("\nThe program works with 0, 1, 2 or 3 command line arguments\n\n");
		return (0);
	}

	printf("\n%10s%s\n", "String: ", str);
	printf("%10s%d\n", "start: ", (int)start);
	printf("%10s%d\n", "len: ", (int)len);
	ft_rval = ft_substr(str, start, len);
	if (*ft_rval)
		printf("%10s%s\n", "ft_rval: ", ft_rval);
	else
		printf("%10s%s\n", "ft_rval: ", "\\0");
	printf("\n");
	free(ft_rval);
	return (0);
}
