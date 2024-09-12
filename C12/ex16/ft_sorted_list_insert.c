/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_insert.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 12:03:04 by itham             #+#    #+#             */
/*   Updated: 2024/09/10 12:46:20 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"
#include <string.h>

t_list	*ft_create_elem(void *data)
{
	t_list	*temp;

	temp = (t_list *)malloc(sizeof(t_list));
	if (!temp)
		return (NULL);
	temp -> data = data;
	temp -> next = NULL;
	return (temp);
}

void	ft_sorted_list_insert(t_list **begin_list, void *data, int (*cmp)())
{
	t_list	*curr;
	t_list	*prev;
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (!*begin_list || cmp((*begin_list)-> data, new_node -> data) >= 0)
	{
		new_node -> next = *begin_list;
		*begin_list = new_node;
		return ;
	}
	curr = *begin_list;
	prev = NULL;
	while (curr && cmp(curr -> data, new_node -> data) <= 0)
	{
		prev = curr;
		curr = curr -> next;
	}
	new_node -> next = curr;
	prev -> next = new_node;
}

// void	ft_list_push_front(t_list **begin_list, void *data)
// {
// 	t_list	*new_node;

// 	new_node = ft_create_elem(data);
// 	if (*begin_list)
// 	{
// 		new_node -> next = *begin_list;
// 		*begin_list = new_node;
// 	}
// 	else
// 		*begin_list = new_node;
// }

// void	print_list(t_list **begin_list)
// {
// 	t_list	*curr;

// 	curr = *begin_list;
// 	while (curr)
// 	{
// 		printf("%s ", (char *)(curr -> data));
// 		curr = curr -> next;
// 	}
// }

// int	main(void)
// {
// 	t_list	*begin_list;

// 	begin_list = NULL;
// 	ft_list_push_front(&begin_list, "z");
// 	ft_list_push_front(&begin_list, "q");
// 	ft_list_push_front(&begin_list, "a");
//     ft_sorted_list_insert(&begin_list, "y", strcmp);
// 	print_list(&begin_list);
// 	return (0);
// }