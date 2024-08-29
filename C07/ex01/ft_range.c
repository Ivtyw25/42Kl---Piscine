/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:21:24 by itham             #+#    #+#             */
/*   Updated: 2024/08/29 14:06:17 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*temp;
	int	i;
	int	size;

	if (min >= max)
		return (NULL);
	size = max - min;
	temp = (int *)malloc(sizeof(int) * (size));
	if (!temp)
		return (NULL);
	i = 0;
	while (i < size)
	{
		temp[i] = min;
		min++;
		i++;
	}
	return (temp);
}

// int	main(void)
// {
// 	int	*temp = ft_range(1,9);
// 	for (int i = 0; i < 8; i++)
// 	{
// 		printf("%d, ", temp[i]);
// 	}
// }
