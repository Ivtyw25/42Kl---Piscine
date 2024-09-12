/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:15:42 by itham             #+#    #+#             */
/*   Updated: 2024/09/10 09:24:39 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ft_list.h"

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

// void    print_data(void *data)
// {
//     printf("%s\n", (char *)(data));
// }

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		if (cmp(list_ptr ->data, data_ref) == 0)
			return (list_ptr);
		list_ptr = list_ptr -> next;
	}
	return (NULL);
}

// int	main(void)
// {
// 	t_list	*begin_list;
//     t_list  *res;

// 	begin_list = NULL;
// 	ft_list_push_front(&begin_list, "hi");
// 	ft_list_push_front(&begin_list, "rose");
// 	ft_list_push_front(&begin_list, "yee");
// 	ft_list_push_front(&begin_list, "ivan");
// 	ft_list_push_front(&begin_list, "what");
// 	ft_list_push_front(&begin_list, "gay");
//     res = ft_list_find(begin_list, "ros", strcmp);
//     printf("%s", (char *)(res -> data));
// 	return (0);
// }
