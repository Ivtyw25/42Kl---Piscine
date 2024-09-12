/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 10:40:20 by itham             #+#    #+#             */
/*   Updated: 2024/09/10 12:47:25 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include "ft_list.h"
#include <string.h>

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*curr;
	t_list	*next;
	int		swapped;
	void	*temp;

	if (!begin_list || !*begin_list)
		return ;
	swapped = 1;
	while (swapped)
	{
		curr = *begin_list;
		swapped = 0;
		while (curr -> next)
		{
			next = curr -> next;
			if (cmp(curr -> data, next -> data) > 0)
			{
				temp = curr -> data;
				curr -> data = next -> data;
				next -> data = temp;
				swapped = 1;
			}
			curr = curr -> next;
		}
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
// 	ft_list_push_front(&begin_list, "b");
// 	ft_list_push_front(&begin_list, "z");
// 	ft_list_push_front(&begin_list, "t");
// 	ft_list_push_front(&begin_list, "q");
// 	ft_list_push_front(&begin_list, "f");
// 	ft_list_push_front(&begin_list, "a");
// 	ft_list_sort(&begin_list, &strcmp);
// 	print_list(&begin_list);
// 	return (0);
// }
