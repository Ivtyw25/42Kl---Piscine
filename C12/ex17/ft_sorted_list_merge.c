/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sorted_list_merge.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 13:29:25 by itham             #+#    #+#             */
/*   Updated: 2024/09/10 13:37:46 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_list.h"

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

void	ft_sorted_list_merge(t_list **begin_list,
								t_list *begin_list2, int (*cmp)())
{
	ft_list_merge(begin_list, begin_list2);
	ft_list_sort(begin_list, cmp);
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
//     ft_list_push_front(&begin_list, "hakd");
//     ft_list_push_front(&begin_list, "daj");
//     ft_list_push_front(&begin_list, "na"); 
//     ft_list_push_front(&begin_list, "ajsd");
//     ft_sorted_list_merge(&begin_list, begin_list2, &strcmp);
// 	print_list(&begin_list);
// 	return (0);
// }
