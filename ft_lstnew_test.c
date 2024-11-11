/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:43:29 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/11 17:25:50 by jvarila          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <bsd/string.h>

#define BUFFER_LENGTH 1024
#define INT_ARRAY_LENGTH 10

void	print_list(t_list *lst)
{
	while (lst)
	{
		printf("%-45s%s\n", " ", (char *)lst->content);
		lst = lst->next;
	}
}

int	main(int argc, char **argv)
{
	char	*s1;
	t_list	*lst;
	t_list	*node;
	char	*data;
	char	**split;
	int		n;
	int		i;

	s1 =	"abcdefghijklmnopqrstuvwxyz "
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ "
			"0123456789!@#$%^&*()_+-=`~ "
			"[]{}\\|;:'\",./<>?";
	node = NULL;
	lst = NULL;
	data = NULL;

	if (argc > 1)
		s1 = argv[1];

	printf("\n%-45s%s\n", "Input string:", s1);
	printf("\n%s\n", "Duplicating string and assigning to data node");
	data = ft_strdup(s1);
	printf("\n%-45s%p\n", "Node before ft_lstnew with data:", node);
	node = ft_lstnew(data);
	printf("\n%-45s%p\n", "Node after ft_lstnew with data:", node);
	printf("\n%-45s%s\n", "Node content after ft_lstnew with data:", (char *)node->content);
	printf("\n%-45s%p\n", "List before ft_lstadd_front:", lst);
	ft_lstadd_front(&lst, node);
	printf("\n%-45s%p\n", "List after ft_lstadd_front:", lst);
	print_list(lst);
	split = ft_split(s1, ' ');
	char **split_iter = split;
	while (*split_iter)
	{
		node = ft_lstnew(*split_iter);
		ft_lstadd_back(&lst, node);
		split_iter++;
	}
	printf("\n");
	print_list(lst);
	ft_lstclear(&lst, free);
	free(split);
	return (0);

	if (argc > 2)
	{
	}

	if (argc > 3)
		;;
	if (argc > 4)
	{
		printf("\nThe program works with 0, 1, 2 or 3 command line arguments\n\n");
		return (0);
	}

	printf("\n");
	printf("\n");
	printf("%-10s%s\n", "String 1:", s1);
	printf("\n%10s%15s%15s\n", "i", "strnstr", "ft_strnstr");
	printf("------------------------------------------\n");
	n = 10;
	i = -1;
	while (++i < n + 2)
	{
		;
	}
	printf("\n");
	return (0);
}
