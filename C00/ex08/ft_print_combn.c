/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 08:53:27 by itham             #+#    #+#             */
/*   Updated: 2024/08/29 11:35:04 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	is_valid(int *arr, int depth, int i)
{
	int	prev;

	prev = 0;
	while (prev < depth)
	{
		if (i <= arr[prev])
			return (0);
		prev++;
	}
	return (1);
}

void	ft_print(int *arr, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = arr[i] + 48;
		write(1, &c, 1);
		i++;
	}
	if (!(arr[0] == 10 - n))
		write(1, &", ", 2);
}

void	ft_recursive_print(int *arr, int n, int depth)
{
	int	i;

	if (depth == n)
	{
		ft_print(arr, n);
	}
	else
	{
		i = 0;
		while (i < 10)
		{
			if (is_valid(arr, depth, i))
			{
				arr[depth] = i;
				ft_recursive_print(arr, n, depth +1);
			}
			i++;
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		arr[i] = -1;
		i++;
	}
	ft_recursive_print(arr, n, 0);
}

// int	main(void)
// {
// 	ft_print_combn(3);
// }
