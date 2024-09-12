/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 13:01:04 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 16:48:43 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

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

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list	*new_node;

	new_node = ft_create_elem(data);
	if (*begin_list)
	{
		new_node -> next = *begin_list;
		*begin_list = new_node;
	}
	else
		*begin_list = new_node;
}

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
// 	print_list(&begin_list);
// 	return (0);
// }
