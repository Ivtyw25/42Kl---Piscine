/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:59:15 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 15:20:23 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_list_last(t_list *begin_list)
{
	t_list	*temp;

	temp = begin_list;
	while (temp -> next)
		temp = temp -> next;
	return (temp);
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

// int	main(void)
// {
// 	t_list	*begin_list;
// 	t_list	*temp;
// 	char *c;

// 	begin_list = NULL;
// 	ft_list_push_front(&begin_list, "a");
// 	ft_list_push_front(&begin_list, "f");
// 	ft_list_push_front(&begin_list, "w");
// 	ft_list_push_front(&begin_list, "s");
// 	ft_list_push_front(&begin_list, "c");
// 	temp = ft_list_last(begin_list);
// 	c = (char *)(temp -> data);
// 	printf("last data is: %s\n", c);
// 	return (0);
// }
