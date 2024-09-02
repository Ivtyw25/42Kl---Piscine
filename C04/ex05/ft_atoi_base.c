/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 07:59:06 by itham             #+#    #+#             */
/*   Updated: 2024/09/02 11:54:44 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	ft_checkbase(char *base)
{
	int	i;
	int	j;

	i = 0;
	if (!base[0] || ft_len(base) == 1)
		return (0);
	while (base[i] != '\0')
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_len(base))
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	ft_isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v'
		|| c == '\f' || c == '\r' || c == ' ')
		return (1);
	return (0);
}

int	ft_convert_res(char *str, char *base, int i)
{
	int	j;
	int	res;

	res = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != base[j] && base[j])
			j++;
		if (!base[j])
			break ;
		res = (res * ft_len(base)) + j;
		i++;
	}
	return (res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	valid;
	int	i;
	int	sign;
	int	res;

	valid = ft_checkbase(base);
	if (!valid)
		return (0);
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	sign = 0;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign++;
		i++;
	}
	if (sign % 2 == 0)
		sign = 1;
	else
		sign = -1;
	res = ft_convert_res (str, base, i);
	return (res * sign);
}

// int main(void)
// {
// 	char *str = "abc";
// 	char *base = "0123456789abc";
// 	printf("%d", ft_atoi_base(str, base));
// 	}
