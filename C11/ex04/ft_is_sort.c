/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 08:52:22 by itham             #+#    #+#             */
/*   Updated: 2024/09/06 09:17:47 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int	i;
	int	ascending;
	int	descending;

	if (length <= 1)
		return (1);
	ascending = 1;
	descending = 1;
	i = 0;
	while (i < length - 1 && (ascending || descending))
	{
		if (f(tab[i], tab[i + 1]) > 0)
			ascending = 0;
		if (f(tab[i], tab[i + 1]) < 0)
			descending = 0;
		if (f(tab[i], tab[i + 1]) == 0)
		{
			i++;
			continue ;
		}
		i++;
	}
	return (ascending || descending);
}

// int	ft_cmp(int a, int b)
// {
// 	if (a < b)
// 		return (-1);
// 	else if (a == b)
// 		return (0);
// 	else
// 		return (1);
// }

// int main(void)
// {
// 	int tab[5] = {1,4,4,4,5};
// 	printf("%d ", ft_is_sort(tab, 5, &ft_cmp));
// }
