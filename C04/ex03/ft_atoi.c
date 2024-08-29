/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/27 12:48:19 by itham             #+#    #+#             */
/*   Updated: 2024/08/28 08:55:34 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_result(char *str, int i)
{
	int	result;
	int	ctr;

	result = 0;
	ctr = 1;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	while (str[i -1] >= '0' && str[i -1] <= '9')
	{
		result = result + ctr * (str[i -1] - 48);
		ctr *= 10;
		i--;
	}
	return (result);
}

int	ft_atoi(char *str)
{
	int	i;
	int	sign_count;
	int	result;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign_count = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			sign_count++;
		i++;
	}
	if (sign_count % 2 == 0)
		sign_count = 1;
	else
		sign_count = -1;
	result = ft_result(str, i);
	return (result * sign_count);
}

// int main(void)
// {
//     int a = ft_atoi("123abc");
//     printf("%d", a);
// }
