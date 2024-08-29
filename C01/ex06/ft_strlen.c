/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 09:35:00 by itham             #+#    #+#             */
/*   Updated: 2024/08/25 10:04:29 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int	i;
	int	ctr;

	i = 0;
	ctr = 0;
	while (str[i] != '\0')
	{
		i++;
		ctr++;
	}
	return (ctr);
}

// int	main(int argc, char **argv)
// {
// 	printf("length is %d ",ft_strlen(argv[1]));

// }
