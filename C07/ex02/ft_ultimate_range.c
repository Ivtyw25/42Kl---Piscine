/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 13:21:24 by itham             #+#    #+#             */
/*   Updated: 2024/08/29 14:27:59 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*temp;
	int	i;
	int	size;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	temp = (int *)malloc(sizeof(int) * (size));
	if (!temp)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (i < size)
	{
		temp[i] = min;
		min++;
		i++;
	}
	*range = temp;
	return (size);
}

// int	main(void)
// {
//     int *range; // a pointer to int
//     int size = ft_ultimate_range(&range, 1, 10);  // address of the pointer

//     if (size > 0)
//     {
//         for (int i = 0; i < size; i++)
//         {
//             printf("%d, ", range[i]);  // Directly access range[i]
//         }
//         printf("\n");
//         free(range);  // Remember to free allocated memory
//     }
//     else
//     {
//         printf("Failed to allocate range or empty range\n");
//     }
// }