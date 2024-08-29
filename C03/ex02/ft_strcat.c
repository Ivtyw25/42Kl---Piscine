/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:56:54 by itham             #+#    #+#             */
/*   Updated: 2024/08/29 07:16:13 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	ctr;

	i = 0;
	if (!dest || !src)
		return (dest);
	while (dest[i] != '\0')
		i++;
	ctr = 0;
	while (src[ctr] != '\0')
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

//     printf("%s", ft_strcat(s1, s2));
// }
