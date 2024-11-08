/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:52:13 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/07 15:27:28 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	char	*s =	"abcdefghijklmnopqrstuvwxyz\n"
					"ABCDEFGHIJKLMNOPQRSTUVWXYZ\n"
					"01234567890\n"
					"!@#$%^&*()~`_-+=[]{}|\\;:'\",.<>/?";
	int	fd;

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

	printf("\n%15s\n%15s\n\n", "s:", s);
	fd = open("temp", O_CREAT | O_WRONLY);

	for (int i = 0; i < (int)ft_strlen(s); i++)
		ft_putchar_fd(s[i], fd);

	close(fd);
	free(s);
	return (0);
}
