/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:57:07 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 17:18:00 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>

void	ft_list_reverse(t_list **begin_list)
{
	t_list	*head;
	t_list	*prev;
	t_list	*next;

	head = *begin_list;
	prev = NULL;
	next = NULL;
	while (head)
	{
		next = head -> next;
		head -> next = prev;
		prev = head;
		head = next;
	}
	*begin_list = prev;
}

// t_list	*ft_create_elem(void *data)
// {
// 	t_list	*temp;

// 	temp = (t_list *)malloc(sizeof(t_list));
// 	if (!temp)
// 		return (NULL);
// 	temp -> data = data;
// 	temp -> next = NULL;
// 	return (temp);
// }

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
// 	ft_list_push_front(&begin_list, "a");
// 	ft_list_push_front(&begin_list, "b");
// 	ft_list_push_front(&begin_list, "c");
// 	ft_list_push_front(&begin_list, "d");
//     ft_list_reverse(&begin_list);
// 	print_list(&begin_list);
// 	return (0);
// }
