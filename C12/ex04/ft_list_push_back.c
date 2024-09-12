/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 12:34:39 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 15:24:27 by itham            ###   ########.fr       */
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

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list	*temp;
	t_list	*cur;

	cur = *begin_list;
	temp = ft_create_elem(data);
	if (*begin_list)
	{
		while (cur -> next)
			cur = cur -> next;
		cur -> next = temp;
	}
	else
		*begin_list = temp;
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
// 	ft_list_push_back(&begin_list, "a");
// 	ft_list_push_back(&begin_list, "b");
// 	ft_list_push_back(&begin_list, "c");
// 	ft_list_push_back(&begin_list, "d");
// 	ft_list_push_back(&begin_list, "e");
// 	print_list(&begin_list);
// 	return (0);
// }
