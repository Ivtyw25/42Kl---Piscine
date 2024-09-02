/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:20:50 by itham             #+#    #+#             */
/*   Updated: 2024/09/02 11:45:49 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_len(char *str);
int	ft_isspace(char c);
int	ft_checkbase(char *base);

int	ft_convert_res(char *str, char *base, int i)
{
	int	res;
	int	j;

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
	int	i;
	int	sign;
	int	res;

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

int	length_nbr(int nbr, char *base_to)
{
	int	nb;
	int	len;
	int	base_len;

	len = 0;
	nb = nbr;
	base_len = ft_len(base_to);
	if (nbr < 0)
	{
		len++;
		nb = nb * -1;
	}
	while (nb != 0)
	{
		len++;
		nb /= base_len;
	}
	return (len);
}

void	ft_convert_base_to(int nbr, int length, char *base_to, char *temp)
{
	long int	nb;
	int			len;
	int			base_len;

	base_len = ft_len(base_to);
	len = length;
	nb = nbr;
	if (nb < 0)
	{
		temp[0] = '-';
		nb *= -1;
	}
	len--;
	while (nb != 0)
	{
		temp[len] = base_to[nb % base_len];
		nb /= base_len;
		len--;
	}
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		length;
	char	*temp;
	char	*str;

	if (!ft_checkbase(base_from) || !ft_checkbase(base_to))
		return (NULL);
	nb = ft_atoi_base(nbr, base_from);
	length = length_nbr(nb, base_to);
	str = (char *)malloc(sizeof(char) * (length + 1));
	temp = str;
	ft_convert_base_to(nb, length, base_to, temp);
	temp[length] = '\0';
	return (str);
}

// int	main(void)
// {
// 	char *base_from = "012345";
// 	char *base_to = "012345678";
// 	char *nbr = "1234";
// 	char *str = ft_convert_base(nbr, base_from, base_to);
// 	printf("%s ", str);
// }