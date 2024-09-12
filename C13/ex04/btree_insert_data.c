/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_insert_data.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 08:57:24 by itham             #+#    #+#             */
/*   Updated: 2024/09/11 15:22:52 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void	btree_insert(t_btree **node, t_btree *temp,
						int (*cmpf)(void *, void *))
{
	if (*node == NULL)
	{
		*node = temp;
		return ;
	}
	else if (cmpf((*node)->item, temp->item) > 0)
		btree_insert(&((*node)->left), temp, cmpf);
	else
		btree_insert(&((*node)->right), temp, cmpf);
}

void	btree_insert_data(t_btree **root, void *item,
							int (*cmpf)(void *, void *))
{
	t_btree	*new_node;

	new_node = btree_create_node(item);
	btree_insert(root, new_node, cmpf);
}

// void	applyf(void *item)
// {
// 	printf("%s ", (char *)item);
// }

// void	btree_apply_prefix(t_btree *root, void (*applyf)(void *))
// {
// 	if (root == NULL)
// 		return ;
// 	applyf(root -> item);
// 	btree_apply_prefix(root -> left, applyf);
// 	btree_apply_prefix(root -> right, applyf);
// }

// int	main(void)
// {
// 	t_btree *root;
// 	root = NULL;
// 	btree_insert_data(&root, "m", &strcmp);
// 	btree_insert_data(&root, "b", &strcmp);
// 	btree_insert_data(&root, "a", &strcmp);
// 	btree_insert_data(&root, "c", &strcmp);
// 	btree_insert_data(&root, "y", &strcmp);
// 	btree_insert_data(&root, "z", &strcmp);
// 	btree_insert_data(&root, "t", &strcmp);
// 	btree_apply_prefix(root, &applyf);
// }
