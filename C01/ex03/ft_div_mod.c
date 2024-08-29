/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:57:07 by itham             #+#    #+#             */
/*   Updated: 2024/08/23 12:29:55 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	res;
	int	rem;

	res = a / b;
	rem = a % b;
	*div = res;
	*mod = rem;
}

// int	main(void)
// {
// 	int a, b, *div, *mod;

// 	a = 50, b = 4;
// 	div = &a; 
// 	mod = &b;
// 	ft_div_mod(a, b, div, mod);
// 	printf("result is %d and remainder is %d", a, b);
// }	
