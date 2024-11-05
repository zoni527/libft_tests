/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 14:50:20 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/05 15:08:56 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>

int	main(int argc, char **argv)
{
	char	*s;
	char	c;
	char	*c_location;
	char	*ft_c_location;

	s = "abcdefghijklmnopqrstuvwxyz";
	c = 'k';
	if (argc > 1)
		s = argv[1];
	if (argc > 2)
		c = argv[2][0];
	if (argc > 3)
	{
		printf("\nProgram can be used with 0, 1 or two arguments\n\n");
		return (0);
	}
	printf("\nString: %s\nCharacter: %c\n", s, c);
	c_location = strchr(s, c);
	ft_c_location = ft_strchr(s, c);
	printf("\n%25s", "strchr returned:\t");
	if (c_location == NULL)
		printf("NULL\n");
	else if (c_location[0] == '\0')
		printf("\\0\n");
	else
		printf("%s\n", c_location);
	printf("%25s", "ft_strchr returned:\t");
	if (c_location == NULL)
		printf("NULL\n\n");
	else if (ft_c_location[0] == '\0')
		printf("\\0\n\n");
	else
		printf("%s\n\n", ft_c_location);
	return (0);
}
