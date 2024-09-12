/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_by_level.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 17:49:16 by itham             #+#    #+#             */
/*   Updated: 2024/09/12 10:37:29 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "ft_btree.h"

// void	print_node_info(void *item, int current_level, int is_first_elem)
// {
// 	printf("Level: %d, %s element, Value: %c\n",
//            current_level,
//            is_first_elem ? "First" : "Not first",
//            *(char *)item);
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

void	apply_to_level(t_btree *root, int cur_level, int *info,
			void (*applyf)(void *item, int current_level, int is_first_elem))
{
	if (!root)
		return ;
	if (cur_level == info[1])
	{
		if (info[2])
		{
			applyf(root -> item, info[1], info[2]);
			info[2] = 0;
			return ;
		}
		applyf(root -> item, info[1], info[2]);
		return ;
	}
	apply_to_level(root -> left, cur_level + 1, info, applyf);
	apply_to_level(root -> right, cur_level + 1, info, applyf);
}

void	btree_apply_by_level(t_btree *root, void (*applyf)(void *item,
			int current_level, int is_first_elem))
{
	int	i;
	int	max_level;
	int	*info;

	if (!root)
		return ;
	max_level = btree_level_count(root);
	info = (int *)malloc(sizeof(int) * 2);
	i = 0;
	while (i <= max_level)
	{
		info[1] = i;
		info[2] = 1;
		apply_to_level(root, 0, info, applyf);
		i++;
	}
}

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
// 						int (*cmpf)())
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
// 							int (*cmpf)())
// {
// 	t_btree	*new_node;

// 	new_node = btree_create_node(item);
// 	btree_insert(root, new_node, cmpf);
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
// 	btree_insert_data(&root, "d", &strcmp);
// 	btree_insert_data(&root, "n", &strcmp);

// 	btree_apply_by_level(root, print_node_info);
// }
