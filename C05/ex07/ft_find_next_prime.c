/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:59:49 by itham             #+#    #+#             */
/*   Updated: 2024/08/28 12:09:04 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_is_prime(int nb)
{
	int	start;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	start = 2;
	while (start < nb / 2)
	{
		if (nb % start == 0)
			return (0);
		start++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	res;

	res = nb;
	if (ft_is_prime(res))
		return (res);
	res++;
	while (!ft_is_prime(res))
	{
		res++;
	}
	return (res);
}

// int	main(void)
// {
// 	printf("%d ", ft_find_next_prime(4));
// }
