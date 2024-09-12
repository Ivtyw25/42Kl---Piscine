/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 09:25:15 by itham             #+#    #+#             */
/*   Updated: 2024/09/10 12:47:05 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>
#include <string.h>

// void	free_fct(void *data)
// {
// 	free(data);
// }

void	ft_list_remove_if(t_list **begin_list, void *data_ref,
							int (*cmp)(), void (*free_fct)(void *))
{
	t_list	*head;
	t_list	*prev;
	t_list	*tmp;

	head = *begin_list;
	while (head)
	{
		if (cmp(head->data, data_ref) == 0)
		{
			if (head == *begin_list)
				*begin_list = head->next;
			else
				prev->next = head->next;
			tmp = head;
			head = head->next;
			free_fct(tmp -> data);
			free(tmp);
		}
		else
		{
			prev = head;
			head = head->next;
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
// 	ft_list_push_front(&begin_list, strdup("a"));
// 	ft_list_push_front(&begin_list, strdup("a"));
// 	ft_list_push_front(&begin_list, strdup("b"));
// 	ft_list_push_front(&begin_list, strdup("d"));
// 	ft_list_push_front(&begin_list, strdup("r"));
// 	ft_list_push_front(&begin_list, strdup("a"));
// 	ft_list_remove_if(&begin_list, "a", &strcmp, &free_fct);
// 	print_list(&begin_list);
// 	return (0);
// }
