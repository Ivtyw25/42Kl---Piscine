/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 08:07:45 by itham             #+#    #+#             */
/*   Updated: 2024/09/13 07:28:26 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_any(char **tab, int (*f)(char *))
{
	int	i;

	i = 0;
	while (tab[i])
	{
		if (f(tab[i]))
			return (1);
		i++;
	}
	return (0);
}

// int	ft_apply(char *str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 	{
// 		if (str[i] == 'a')
// 			return (1);
// 		i++;
// 	}
// 	return (0);
// }

/*int main(void)
{
	char *str_arr[3] = {"hali", "sjf", 0};
	printf("%d ", ft_any(str_arr, &ft_apply));

}*/
