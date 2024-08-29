/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 09:01:12 by itham             #+#    #+#             */
/*   Updated: 2024/08/28 09:10:04 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	i;
	int	res;

	if (nb == 0)
		return (1);
	if (nb < 0)
		return (0);
	res = 1;
	i = 1;
	while (i <= nb)
	{
		res = res * i;
		i++;
	}
	return (res);
}

// int main(void)
// {
//     printf("%d ", ft_iterative_factorial(4));
// }
