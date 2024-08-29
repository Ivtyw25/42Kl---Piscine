/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:39:07 by itham             #+#    #+#             */
/*   Updated: 2024/08/28 10:26:51 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power -1));
}

int	ft_sqrt(int nb)
{
	int	sqrt;
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	sqrt = (ft_recursive_power(i, 2));
	while (sqrt <= nb)
	{
		if (sqrt == nb)
			return (i);
		i++;
		sqrt = (ft_recursive_power(i, 2));
	}
	return (0);
}

// int main(void)
// {
// 	printf("%d ", ft_sqrt(226));
// }
