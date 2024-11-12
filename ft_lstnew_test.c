/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew_test.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jvarila <jvarila@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 17:43:29 by jvarila           #+#    #+#             */
/*   Updated: 2024/11/12 10:44:23 by jvarila          ###   ########.fr       */
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
		printf("%45s %s\n", " ", (char *)lst->content);
		lst = lst->next;
	}
}

void	print_len(void *ptr)
{
	char	*str;

	if (!ptr)
	{
		printf("\n(nil)\n");
		return ;
	}
	str = (char *)ptr;
	printf("\n%45s %s\n", "String:", str);
	printf("\n%45s %d\n", "ft_strlen:", (int)ft_strlen(str));
}

void	capitalize(char *str)
{
	while (*str)
	{
		*str = ft_toupper(*str);
		str++;
	}
}

void	*capitalized_string(void *ptr)
{
	char	*str;
	
	str = ft_strdup((char *)ptr);
	capitalize(str);
	return ((void *)str);
}

int	main(int argc, char **argv)
{
	char	*s1;
	t_list	*lst;
	t_list	*node;
	char	*data;
	char	**split;
	int		lst_len;

	s1 =	"abcdefghijklmnopqrstuvwxyz "
			"ABCDEFGHIJKLMNOPQRSTUVWXYZ "
			"0123456789!@#$%^&*()_+-=`~ "
			"[]{}\\|;:'\",./<>?";
	node = NULL;
	lst = NULL;
	data = NULL;

	if (argc > 1)
		s1 = argv[1];

	printf("\n%45s %s\n", "Input string:", s1);
	printf("\n%s\n", "Duplicating string and assigning to data node");
	data = ft_strdup(s1);
	printf("\n%45s %p\n", "Node before ft_lstnew with data:", node);
	node = ft_lstnew(data);
	printf("\n%45s %p\n", "Node after ft_lstnew with data:", node);
	printf("\n%45s %s\n", "Node content after ft_lstnew with data:", (char *)node->content);
	printf("\n%45s %p\n", "List before ft_lstadd_front:", lst);
	ft_lstadd_front(&lst, node);
	printf("\n%45s %p\n", "List after ft_lstadd_front:", lst);
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
	lst_len = ft_lstsize(lst);
	printf("\n%45s %d\n", "ft_lstsize(lst):", lst_len);
	printf("\n%45s \n", "Adding element with ft_lstadd_back");
	node = ft_lstnew(ft_strdup("ft_lstadd_back_test"));
	ft_lstadd_back(&lst, node);
	printf("\n%45s %s\n", "(char *)ft_lstlast(lst)->content:", (char *)ft_lstlast(lst)->content);
	printf("\n%45s \n", "Deleting last node with ft_lstdelone");
	node = lst;
	while (node->next && node->next->next)
		node = node->next;
	ft_lstdelone(node->next, free);
	node->next = NULL;
	print_list(lst);
	ft_lstiter(lst, print_len);
	t_list	*new_list = ft_lstmap(lst, capitalized_string, free);
	print_list(new_list);
	ft_lstclear(&lst, free);
	ft_lstclear(&new_list, free);
	free(split);
	return (0);
}
