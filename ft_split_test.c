/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 16:12:08 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/06 17:09:47 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static char	**ft_free_array(char **array, size_t len);

int	main(int argc, char **argv)
{
	char	*s;
	char	c;
	char	**ft_rval;
	size_t	i;

	s = "__|Split|___|this|_|string|_|into|_|pieces|_|please|";
	c = '_';

	if (argc > 1)
		s = argv[1];
	if (argc > 2)
		c = argv[2][0];
	if (argc > 3)
	{
		printf("\nThe program works with 0, 1 or 2 command line arguments\n\n");
		return (0);
	}

	printf("\n%10s%s\n", "s: ", s);
	printf("%10s%c\n", "c: ", c);
	ft_rval = ft_split(s, c);
	printf("\n%10s\n", "Parts:");
	i = 0;
	while (ft_rval[i])
		printf("%10s\n", ft_rval[i++]);
	printf("\n");
	ft_free_array(ft_rval, i);
	return (0);
}

static char	**ft_free_array(char **array, size_t len)
{
	while (len--)
		free(array[len]);
	free (array);
	return (NULL);
}
