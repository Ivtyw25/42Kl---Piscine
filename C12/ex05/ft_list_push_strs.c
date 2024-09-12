/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 13:03:38 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 15:31:58 by itham            ###   ########.fr       */
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

t_list	*ft_list_push_strs(int size, char **strs)
{
	int		i;
	t_list	*temp;
	t_list	*begin_list;

	begin_list = 0;
	i = 0;
	while (i < size && strs[i])
	{
		temp = ft_create_elem(strs[i]);
		temp -> next = begin_list;
		begin_list = temp;
		i++;
	}
	return (begin_list);
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
// 	char	*strs[] = {"hello", "my", "name", "is", "ivan"};

// 	begin_list = ft_list_push_strs(5, strs);
// 	print_list(&begin_list);
// 	return (0);
// }
