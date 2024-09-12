/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_suffix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:11:21 by itham             #+#    #+#             */
/*   Updated: 2024/09/11 08:46:25 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "ft_btree.h"

// t_btree	*btree_create_node(void *item)
// {
// 	t_btree	*temp;

// 	temp = (t_btree *)malloc(sizeof(t_btree));
// 	if (!temp)
// 		return (NULL);
// 	temp -> item = item;
// 	temp -> left = NULL;
// 	temp -> right = NULL;
// 	return (temp);
// }

void	btree_apply_suffix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	btree_apply_suffix(root -> left, applyf);
	btree_apply_suffix(root -> right, applyf);
	applyf(root -> item);
}
