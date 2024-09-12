/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 11:54:18 by itham             #+#    #+#             */
/*   Updated: 2024/09/11 15:21:54 by itham            ###   ########.fr       */
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

void	*btree_search_item(t_btree *root, void *data_ref,
							int (*cmpf)(void *, void *))
{
	void	*res;

	res = NULL;
	if (!root)
		return (NULL);
	res = btree_search_item(root -> left, data_ref, cmpf);
	if (cmpf(data_ref, root -> item) == 0 && !res)
		return (root -> item);
	if (!res)
		res = btree_search_item(root -> right, data_ref, cmpf);
	return (res);
}

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
//     printf("%s ",(char *)btree_search_item(root, "8", &strcmp));
// }
