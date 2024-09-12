/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:09:54 by itham             #+#    #+#             */
/*   Updated: 2024/09/10 10:37:35 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"
#include <stdio.h>

void	ft_list_merge(t_list **begin_list, t_list *begin_list2)
{
	t_list	*last;

	if (*begin_list)
	{
		last = *begin_list;
		while (last -> next)
			last = last -> next;
		last -> next = begin_list2;
	}
	else
		*begin_list = begin_list2;
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
//     t_list  *begin_list2;

// 	begin_list = NULL;
//     begin_list2 = NULL;
//     ft_list_push_front(&begin_list2, "hi");
//     ft_list_push_front(&begin_list2, "my");
//     ft_list_push_front(&begin_list2, "name"); 
//     ft_list_push_front(&begin_list2, "is");
//     ft_list_merge(&begin_list, begin_list2);
// 	print_list(&begin_list);
// 	return (0);
// }
