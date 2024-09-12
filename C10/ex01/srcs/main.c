/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 08:27:20 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 09:44:19 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "../includes/ft_cat.h"

int	main(int ac, char *av[])
{
	int	i;

	i = 1;
	if (ac == 1)
	{
		in_to_out();
	}
	else
	{
		while (i < ac)
		{
			if (ft_strcmp(av[i], "-") == 0)
				in_to_out();
			else
				ft_cat(av[i]);
			i++;
		}
	}
	return (0);
}
