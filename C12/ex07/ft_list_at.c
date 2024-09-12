/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 16:45:22 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 16:55:57 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list			*curr;
	unsigned int	i;

	curr = begin_list;
	i = 0;
	while (i != nbr)
	{
		curr = curr -> next;
		i++;
	}
	return (curr);
}

// int	main(void)
// {
// 	t_list	*begin_list;
//     t_list  *temp;

// 	begin_list = NULL;
// 	ft_list_push_front(&begin_list, "aesdf");
// 	ft_list_push_front(&begin_list, "afs");
// 	ft_list_push_front(&begin_list, "sfd");
// 	ft_list_push_front(&begin_list, "fs");
// 	ft_list_push_front(&begin_list, "gdfg");
// 	ft_list_push_front(&begin_list, "fg");
// 	ft_list_push_front(&begin_list, "sf");
//     temp = ft_list_at(begin_list, 4);
//     printf("%s\n", (char *)(temp -> data));
// 	return (0);
// }
