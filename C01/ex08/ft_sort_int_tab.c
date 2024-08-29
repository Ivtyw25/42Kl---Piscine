/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:49:40 by itham             #+#    #+#             */
/*   Updated: 2024/08/24 11:14:52 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	temp;
	int	ctr;
	int	min;
	int	j;

	ctr = 0;
	while (ctr < size - 1)
	{
		min = ctr;
		j = ctr + 1;
		while (j < size)
		{
			if (tab[j] < tab[min])
				min = j;
			j++;
		}
		if (tab[ctr] != tab [min])
		{
			temp = tab[min];
			tab[min] = tab[ctr];
			tab[ctr] = temp;
		}
		ctr++;
	}
}

// int	main(void)
// {
// 	int	arr[] = {5,2,7,1,8,3,0,9};
// 	ft_sort_int_tab(arr, 8);

// 	for (int i = 0; i < 8; i ++)
// 	{
// 		printf("%d ", arr[i]);
// 	}
// }
