/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 07:53:28 by itham             #+#    #+#             */
/*   Updated: 2024/09/06 08:21:55 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*temp;
	int	i;
	int	val;

	temp = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		val = f(tab[i]);
		temp[i] = val;
		i++;
	}
	return (temp);
}

// int	ft_apply(int nb)
// {
// 	return nb*2;
// }

// int main(void)
// {	
// 	int tab[5] = {1, 2, 3, 4, 5};
// 	int *temp = ft_map(tab, 5, &ft_apply);
// 	for (int i = 0; i < 5; i++)
// 	{
// 		printf("%d ", temp[i]);
// 	}
// }
