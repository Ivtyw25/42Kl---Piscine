/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 12:12:11 by itham             #+#    #+#             */
/*   Updated: 2024/09/11 15:26:24 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

// void	btree_insert(t_btree **node, t_btree *temp,
// 						int (*cmpf)(void *, void *))
// {
// 	if (*node == NULL)
// 	{
// 		*node = temp;
// 		return ;
// 	}
// 	else if (cmpf((*node)->item, temp->item) > 0)
// 		btree_insert(&((*node)->left), temp, cmpf);
// 	else
// 		btree_insert(&((*node)->right), temp, cmpf);
// }

// void	btree_insert_data(t_btree **root, void *item,
// 							int (*cmpf)(void *, void *))
// {
// 	t_btree	*new_node;

// 	new_node = btree_create_node(item);
// 	btree_insert(root, new_node, cmpf);
// }


int	btree_level_count(t_btree *root)
{
	int	left;
	int	right;
	int	res;

	left = 0;
	right = 0;
	if (root == NULL)
		return (-1);
	left = btree_level_count(root -> left);
	right = btree_level_count(root -> right);
	if (left > right)
		res = left + 1;
	else
		res = right + 1;
	return (res);
}

// int	main(void)
// {
// 	t_btree *root;
// 	root = NULL;
// 	btree_insert_data(&root, "a", &strcmp);
// 	btree_insert_data(&root, "b", &strcmp);
// 	btree_insert_data(&root, "c", &strcmp);
// 	btree_insert_data(&root, "d", &strcmp);
// 	btree_insert_data(&root, "e", &strcmp);
// 	btree_insert_data(&root, "f", &strcmp);
// 	btree_insert_data(&root, "g", &strcmp);
//     printf("level of this tree is: %d ", btree_level_count(root));
// }
