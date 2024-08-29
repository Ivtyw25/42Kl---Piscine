/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 12:29:59 by itham             #+#    #+#             */
/*   Updated: 2024/08/27 08:56:43 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	bool	change;

	ft_strlowcase(str);
	i = 0;
	change = true;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (change)
				str[i] -= 32;
			change = false;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			change = false;
		else
			change = true;
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char str[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et";

// 	printf("%s ", ft_strcapitalize(str));
//     return (0);

// }
