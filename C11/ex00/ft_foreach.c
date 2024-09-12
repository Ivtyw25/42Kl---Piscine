/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 07:42:14 by itham             #+#    #+#             */
/*   Updated: 2024/09/06 12:00:22 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
	{
		f(tab[i]);
		i++;
	}
}

// void	ft_putnbr(int nb)
// {
// 	printf("%d ", nb);	
// }

// int	main(void)
// {
// 	int tab[5] = {1,2,3,4,5};
// 	ft_foreach(tab, 5, &ft_putnbr);
// 	return (0);
// }
