/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 15:26:28 by itham             #+#    #+#             */
/*   Updated: 2024/08/27 08:55:31 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

int	ft_str_is_alpha(char *str)
{
	int		i;
	bool	upper;
	bool	lower;

	if (str[0] == '\0')
		return (1);
	i = 0;
	while (str[i] != '\0')
	{
		upper = str[i] >= 'A' && str[i] <= 'Z';
		lower = str[i] >= 'a' && str [i] <= 'z';
		if (upper || lower)
			i++;
		else
			return (0);
	}
	return (1);
}

// int	main(void)
// {
// 	printf("%d ", ft_str_is_alpha("hello1"));
// 	printf("%d ", ft_str_is_alpha("jadja"));
// 	printf("%d ", ft_str_is_alpha(""));
// }
