/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/10 15:59:54 by itham             #+#    #+#             */
/*   Updated: 2024/09/11 09:28:13 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

t_btree	*btree_create_node(void *item)
{
	t_btree	*temp;

	temp = (t_btree *)malloc(sizeof(t_btree));
	if (!temp)
		return (NULL);
	temp -> item = item;
	temp -> left = NULL;
	temp -> right = NULL;
	return (temp);
}
