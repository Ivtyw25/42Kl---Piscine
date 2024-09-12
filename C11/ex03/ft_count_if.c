/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 08:36:44 by itham             #+#    #+#             */
/*   Updated: 2024/09/06 12:00:54 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_count_if(char **tab, int length, int (*f)(char *))
{
	int	i;
	int	count;
	int	res;

	count = 0;
	while (i < length)
	{
		res = f(tab[i]);
		if (res)
			count++;
		i++;
	}
	return (count);
}

// int	ft_apply(char *str)
// {
// 	int i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == 'a')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

// int	main(void)
// {
// 	char *str_arr[4] = {"hesrhf", "fjf", "dadfs", "dhad"};
// 	printf("%d ", ft_count_if(str_arr, 4, &ft_apply));
// }
