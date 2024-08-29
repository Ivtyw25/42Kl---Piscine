/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 10:50:32 by itham             #+#    #+#             */
/*   Updated: 2024/08/29 08:35:45 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, &"-", 1);
		write(1, &"2", 1);
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		write(1, &"-", 1);
		ft_putnbr(-(nb));
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else if (nb < 10)
	{
		c = nb + 48;
		write(1, &c, 1);
	}
}

// int	main(void)
// {
// 	ft_putnbr(18283);
// 	write(1, &"\n",1);
// 	ft_putnbr(-138232);
// 	write(1, &"\n",1);
// 	ft_putnbr(0);
// }
