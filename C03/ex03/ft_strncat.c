/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:56:54 by itham             #+#    #+#             */
/*   Updated: 2024/08/27 11:08:19 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	ctr;

	i = 0;
	while (dest[i] != '\0')
		i++;
	ctr = 0;
	while (src[ctr] && ctr < nb)
	{
		dest[i] = src[ctr];
		i++;
		ctr++;
	}
	dest[i] = '\0';
	return (dest);
}

// int main(void)
// {
//     char s1[50] = "hello world";
//     char *s2 = " my name is ivan";

//     printf("%s", ft_strncat(s1, s2, 10));
// }
