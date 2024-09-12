/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 15:40:23 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 16:31:17 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
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

// void	free_fct(void *data)
// {
// 	free(data);
// }

void	ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list	*curr;
	t_list	*next;

	curr = begin_list;
	if (!begin_list)
		return ;
	while (curr)
	{
		next = curr -> next;
		free_fct(curr -> data);
		free(curr);
		curr = next;
	}
}

// void print_list(t_list *begin_list)
// {
//     t_list *current = begin_list;

// 	if (!current)
// 		printf("There is nothing in the list..");
//     while (current)
//     {
//         printf("%s ", (char *)current->data);
//         current = current->next;
//     }
//     printf("\n");
// }

// // Test the function
// int main(void)
// {
//     t_list *begin_list = NULL;

//     // Push some strings to the list
//     ft_list_push_front(&begin_list, strdup("world"));
//     ft_list_push_front(&begin_list, strdup("hello"));

// 	ft_list_clear(begin_list, &free_fct);
//     // Print the list
//     print_list(begin_list);

//     // Free allocated memory (not shown here, but you should do this)
//     return 0;
// }
