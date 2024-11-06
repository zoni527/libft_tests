/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 14:33:16 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/06 14:36:17 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*s1;
	char	*set;
	char	*ft_rval;

	s1 = "	   ____Test string___	  ";
	set = "	 _";

	if (argc > 1)
		s1 = argv[1];
	if (argc > 2)
		set = argv[2];
	if (argc > 3)
	{
		printf("\nThe program works with 0, 1 or 2 command line arguments\n\n");
		return (0);
	}

	printf("\n%10s%s\n", "s1: ", s1);
	printf("%10s%s\n", "set: ", set);
	ft_rval = ft_strtrim(s1, set);
	if (*ft_rval)
		printf("%10s%s\n", "ft_rval: ", ft_rval);
	else
		printf("%10s%s\n", "ft_rval: ", "\\0");
	printf("\n");
	free(ft_rval);
	return (0);
}
