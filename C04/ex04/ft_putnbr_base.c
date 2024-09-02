/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 07:54:38 by itham             #+#    #+#             */
/*   Updated: 2024/09/02 11:54:42 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_len(char *base)
{
	int	i;

	i = 0;
	while (base[i])
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
	while (base[i])
	{
		if (base[i] <= 32 || base[i] == 127 || base[i] == 43 || base[i] == 45)
			return (0);
		j = i + 1;
		while (j < ft_len(base))
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_print(int nbr, char *base)
{
	int	len;

	len = ft_len(base);
	if (nbr < 0)
	{
		write(1, "-", 1);
		if (nbr == -2147483648)
		{
			ft_print(-(nbr / len), base);
			ft_print(-(nbr % len), base);
			return ;
		}
		nbr = -nbr;
	}
	if (nbr >= len)
	{
		ft_print(nbr / len, base);
		ft_print(nbr % len, base);
	}
	else if (nbr < len)
	{
		write(1, &base[nbr], 1);
	}
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	valid;

	valid = ft_checkbase(base);
	if (!valid)
		return ;
	else
		ft_print(nbr, base);
}

// int main(void)
// {
//     char arrr[] = "0123456789abcdef";
//     ft_putnbr_base(-123, arrr);
// }
