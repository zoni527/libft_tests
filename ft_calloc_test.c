/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/06 10:32:21 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/06 11:19:43 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

void	ft_write_n_chars(void *location, size_t n);

int	main(int argc, char **argv)
{
	(void)argc;
	(void)argv;

	size_t	nmemb;
	size_t	size;
	void	*rval;
	void	*ft_rval;

	nmemb = 0;
	size = 1;
	rval = calloc(nmemb, size);
	ft_rval = ft_calloc(nmemb, size);
	printf("\n%10s%10s%20s%20s\n",
		"size", "nmemb", "rval", "ft_rval");
	printf("----------------------------------------------------------------------\n");
	printf("%10d%10d%20p%20p\n",
		(int)size,(int)nmemb, rval, ft_rval);
	printf("\n   calloc return memory location interpreted as ascii characters: ");
	ft_write_n_chars(rval, 10);
	printf("\nft_calloc return memory location interpreted as ascii characters: ");
	ft_write_n_chars(ft_rval, 10);
	printf("\n");
	free(ft_rval);
	free(rval);

	nmemb = 0;
	size = 0;
	rval = calloc(nmemb, size);
	ft_rval = ft_calloc(nmemb, size);
	printf("\n%10s%10s%20s%20s\n",
		"size", "nmemb", "rval", "ft_rval");
	printf("----------------------------------------------------------------------\n");
	printf("%10d%10d%20p%20p\n",
		(int)size,(int)nmemb, rval, ft_rval);
	printf("\n   calloc return memory location interpreted as ascii characters: ");
	ft_write_n_chars(rval, 10);
	printf("\nft_calloc return memory location interpreted as ascii characters: ");
	ft_write_n_chars(ft_rval, 10);
	printf("\n");
	free(ft_rval);
	free(rval);

	nmemb = 1;
	size = 0;
	rval = calloc(nmemb, size);
	ft_rval = ft_calloc(nmemb, size);
	printf("\n%10s%10s%20s%20s\n",
		"size", "nmemb", "rval", "ft_rval");
	printf("----------------------------------------------------------------------\n");
	printf("%10d%10d%20p%20p\n",
		(int)size,(int)nmemb, rval, ft_rval);
	printf("\n   calloc return memory location interpreted as ascii characters: ");
	ft_write_n_chars(rval, 10);
	printf("\nft_calloc return memory location interpreted as ascii characters: ");
	ft_write_n_chars(ft_rval, 10);
	printf("\n");
	free(ft_rval);
	free(rval);

	nmemb = 2;
	size = 9;
	rval = calloc(nmemb, size);
	ft_rval = ft_calloc(nmemb, size);
	printf("\n%10s%10s%20s%20s\n",
		"size", "nmemb", "rval", "ft_rval");
	printf("----------------------------------------------------------------------\n");
	printf("%10d%10d%20p%20p\n",
		(int)size,(int)nmemb, rval, ft_rval);
	printf("\n   calloc return memory location interpreted as ascii characters: ");
	ft_write_n_chars(rval, size * nmemb);
	printf("\nft_calloc return memory location interpreted as ascii characters: ");
	ft_write_n_chars(ft_rval, size * nmemb);
	printf("\n");
	free(ft_rval);
	free(rval);

	printf("\n");
	return (0);
}

void	ft_write_n_chars(void *location, size_t n)
{
	char	*char_ptr;
	size_t	i;

	char_ptr = (char *)location;
	if (char_ptr == NULL)
	{
		printf(" NULL\n");
		return ;
	}
	i = 0;
	while (i < n)
	{
		if (char_ptr[i] == '\0')
			printf("%3s", "\\0");
		else if (!isprint(char_ptr[i]))
			printf("%3s", "_");
		else
			printf("%3c", char_ptr[i]);
		i++;
	}
}
