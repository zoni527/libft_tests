/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd_test.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:47:00 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/07 15:49:35 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <fcntl.h>

int	main(int argc, char **argv)
{
	int	fd;
	int	num;

	num = 42;

	if (argc > 1)
	{
		num = atoi(argv[1]);
	}
	if (argc > 2)
	{
		printf("\nThe program works with 0 or 1 command line arguments\n\n");
		return (0);
	}

	printf("\n%15s\n%15d\n\n", "num:", num);
	fd = open("temp", O_CREAT | O_WRONLY);
	ft_putnbr_fd(num, fd);

	close(fd);
	return (0);
}
