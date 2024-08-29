/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:48:54 by itham             #+#    #+#             */
/*   Updated: 2024/08/24 12:55:51 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	temp;
	int	ctr;

	ctr = 0;
	while (ctr < size)
	{
		temp = tab[ctr];
		tab[ctr] = tab [size - 1];
		tab[size - 1] = temp;
		ctr++;
		size--;
	}
}

// int	main(void)
// {
// 	int	arr[] = {1,2,3,4,5,6,7,8,9,10,11};
// 	ft_rev_int_tab(arr, 11);
// 	for (int i = 0; i < 11; i++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// }
