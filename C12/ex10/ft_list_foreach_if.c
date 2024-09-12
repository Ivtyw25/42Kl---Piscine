/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:00:59 by itham             #+#    #+#             */
/*   Updated: 2024/09/10 09:14:44 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>
#include <string.h>

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

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
							void *data_ref, int (*cmp)())
{
	t_list	*list_ptr;

	list_ptr = begin_list;
	if (!list_ptr)
		return ;
	while (list_ptr)
	{
		if (cmp(list_ptr -> data, data_ref) == 0)
			f(list_ptr -> data);
		list_ptr = list_ptr -> next;
	}
}

// int	main(void)
// {
// 	t_list	*begin_list;

// 	begin_list = NULL;
// 	ft_list_push_front(&begin_list, "hi");
// 	ft_list_push_front(&begin_list, "rose");
// 	ft_list_push_front(&begin_list, "yee");
// 	ft_list_push_front(&begin_list, "ivan");
// 	ft_list_push_front(&begin_list, "what");
// 	ft_list_push_front(&begin_list, "gay");
// 	ft_list_foreach_if(begin_list, print_data, (void *)("yee"), strcmp);
// 	return (0);
// }
