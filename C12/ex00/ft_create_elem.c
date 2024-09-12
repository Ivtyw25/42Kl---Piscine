/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:54:31 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 14:54:12 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_list.h"
#include <stdlib.h>

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
