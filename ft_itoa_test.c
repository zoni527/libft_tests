/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 09:56:53 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/14 10:37:43 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*ft_rval;
	int		n[] = {	-1, -2, -3, 0, 1, 2, 3,
					1236123, -1236121, 142138, 88908, -12342134,
					INT_MIN, INT_MAX};
	int		num;
	int		i;

	if (argc > 1)
		num = atoi(argv[1]);
	if (argc > 2)
	{
		printf("\nThe program works with 0, 1 or 2 command line arguments\n\n");
		return (0);
	}

	printf("\n%15s%15s\n", "n", "ft_rval");
	if (argc > 1)
	{
		ft_rval = ft_itoa(num);
		printf("%15d%15s\n", num, ft_rval);
		free(ft_rval);
		printf("\n");
		return (0);
	}
	i = -1;
	while (++i < (int)(sizeof(n)/sizeof(n[0])))
	{
		ft_rval = ft_itoa(n[i]);
		printf("%15d%15s\n", n[i], ft_rval);
		free(ft_rval);
	}
	printf("\n");
	return (0);
}
