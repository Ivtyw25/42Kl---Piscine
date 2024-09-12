/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 11:14:01 by itham             #+#    #+#             */
/*   Updated: 2024/09/12 11:20:43 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	start;

	if (nb < 2)
		return (0);
	if (nb == 2 || nb == 3)
		return (1);
	if (nb % 2 == 0 || nb % 3 == 0)
		return (0);
	start = 5;
	while (start < nb / 2)
	{
		if (nb % start == 0)
			return (0);
		start++;
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d", ft_is_prime(19));
// }
