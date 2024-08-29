/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 15:35:34 by itham             #+#    #+#             */
/*   Updated: 2024/08/22 15:14:37 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	temp;

	temp = 'P';
	if (n >= 0)
		write(1, &temp, 1);
	else
	{
		temp -= 2;
		write(1, &temp, 1);
	}
}

// int	main(void)
// {
// 	ft_is_negative(-1);
// }
