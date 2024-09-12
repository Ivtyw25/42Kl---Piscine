/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 11:52:38 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 15:16:19 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
	int		i;
	t_list	*temp;

	temp = begin_list;
	i = 0;
	while (temp)
	{
		temp = temp -> next;
		i++;
	}
	return (i);
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

// 	begin_list = NULL;
// 	ft_list_push_front(&begin_list, "a");
// 	ft_list_push_front(&begin_list, "f");
// 	ft_list_push_front(&begin_list, "w");
// 	ft_list_push_front(&begin_list, "s");
// 	ft_list_push_front(&begin_list, "c");
// 	printf("size is: %d\n", ft_list_size(begin_list));
// 	return (0);
// }
