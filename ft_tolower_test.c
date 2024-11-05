/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower_test.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/30 16:49:27 by jvarila           #+#    #+#             */
/*   Updated: 2024/10/31 09:11:23 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#define BUFFER_SIZE 1024

int	main(int argc, char **argv)
{
	char	*s;
	char	buffer[BUFFER_SIZE];
	int		i;

	if (argc == 1)
		s = "THE QUICK BROWN FOX JUMPS OVER THE LAZY E-DOG, 09, AZ, AZ, !#@+";
	else if (argc == 2)
		s = argv[1];
	else
	{
		printf("The program can be used with 0 or 1 command line arguments\n");
		return (0);
	}
	i = -1;
	while (s[++i])
		buffer[i] = ft_tolower(s[i]);
	buffer[i] = '\0';
	printf("\n\n%-20s%s\n", "Test string", s);
	printf("%-20s%s\n\n", "Modified string", buffer);
	return (0);
}
