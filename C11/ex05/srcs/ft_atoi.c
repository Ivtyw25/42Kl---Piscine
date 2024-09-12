/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:02:20 by itham             #+#    #+#             */
/*   Updated: 2024/09/06 12:02:22 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	sign;
	int	result;
	int	i;

	sign = 1;
	result = 0;
	i = 0;
	while (str[i] && (str[i] == '\f' || str[i] == '\t' || str[i] == ' '
			|| str[i] == '\n' || str[i] == '\r' || str[i] == '\v'))
		i++;
	while (str[i] && (str[i] == '+' || str[i] == '-'))
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		result *= 10;
		result += str[i] - '0' ;
		i++;
	}
	result *= sign;
	return (result);
}
