/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 12:54:43 by itham             #+#    #+#             */
/*   Updated: 2024/08/22 15:11:46 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int	start;

	start = 'a';
	while (start <= 'z')
	{
		write(1, &start, 1);
		start++;
	}
}

// int	main(void)
// {
// 	ft_print_alphabet();
// }
