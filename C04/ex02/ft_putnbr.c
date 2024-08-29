/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 11:17:34 by itham             #+#    #+#             */
/*   Updated: 2024/08/28 08:55:12 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putnbr(int nbr)
{
	char	temp;

	if (nbr == -2147483648)
	{
		write(1, &"-", 1);
		write(1, &"2", 1);
		ft_putnbr(147483648);
	}
	else if (nbr < 0)
	{
		write(1, &"-", 1);
		nbr = 0 - nbr;
		ft_putnbr(nbr);
	}
	else if (nbr >= 10)
	{
		ft_putnbr(nbr / 10);
		ft_putnbr(nbr % 10);
	}
	else if (nbr < 10)
	{
		temp = 48 + nbr;
		write(1, &temp, 1);
	}
}

// int main() {

//     ft_putnbr(1933298);
//     return 0;
// }
