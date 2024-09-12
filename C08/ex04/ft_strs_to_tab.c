/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/03 07:41:57 by itham             #+#    #+#             */
/*   Updated: 2024/09/03 08:04:22 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_stock_str.h"

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_dup(char *str)
{
	char	*temp;
	int		size;
	int		i;

	size = ft_len(str);
	temp = (char *)malloc(sizeof(char) * (size + 1));
	i = 0;
	while (str[i])
	{
		temp[i] = str[i];
		i++;
	}
	temp[i] = '\0';
	return (temp);
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	t_stock_str	*store;
	int			i;

	store = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	i = 0;
	if (!store)
		return (NULL);
	while (i < ac)
	{
		store[i].size = ft_len(av[i]);
		store[i].str = av[i];
		store[i].copy = ft_dup(av[i]);
		i++;
	}
	store[i] = (t_stock_str){0, NULL, NULL};
	return (store);
}
