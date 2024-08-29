/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/23 12:32:17 by itham             #+#    #+#             */
/*   Updated: 2024/08/23 12:39:28 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	res;
	int	rem;

	res = *a / *b;
	rem = *a % *b;
	*a = res;
	*b = rem;
}

// int	main(void)
// {
// 	int	a;
// 	int	b;
// 	int *ptr_res, *ptr_rem;

// 	a = 60;
// 	b = 7;
// 	ptr_res = &a;
// 	ptr_rem = &b;

// 	ft_ultimate_div_mod(ptr_res, ptr_rem);

// 	printf("result it %d, remainder is %d", a, b);
// }	
