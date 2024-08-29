/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/21 13:09:46 by itham             #+#    #+#             */
/*   Updated: 2024/08/22 15:12:31 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	int	start;

	start = 'z';
	while (start >= 'a')
	{
		write(1, &start, 1);
		start--;
	}
}

// int	main(void)
// {
// 	ft_print_reverse_alphabet();
// }
