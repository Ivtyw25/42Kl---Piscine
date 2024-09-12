/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse_fun.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 11:32:18 by itham             #+#    #+#             */
/*   Updated: 2024/09/10 13:21:42 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

void	ft_list_reverse_fun(t_list *begin_list)
{
	t_list	*curr;
	t_list	*next;
	void	*temp;

	curr = begin_list;
	while (curr)
	{
		next = curr -> next;
		while (next)
		{
			temp = curr -> data;
			curr -> data = next -> data;
			next -> data = temp;
			next = next -> next;
		}
		curr = curr -> next;
	}
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
// 	ft_list_push_front(&begin_list, "e");
// 	ft_list_push_front(&begin_list, "d");
// 	ft_list_push_front(&begin_list, "c");
// 	ft_list_push_front(&begin_list, "b");
//     ft_list_reverse_fun(begin_list);
// 	print_list(&begin_list);
// 	return (0);
// }
