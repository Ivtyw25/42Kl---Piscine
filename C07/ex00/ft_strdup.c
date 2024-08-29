/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:27:19 by itham             #+#    #+#             */
/*   Updated: 2024/08/29 12:51:35 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_len(char *src)
{
	int i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		i;

	temp = (char *)malloc(sizeof(char) * ft_len(src));
	if (!temp)
		return (NULL);
	else
	{
		i = 0;
		while (src[i])
		{
			temp[i] = src[i];
			i++;
		}
	}
	return (temp);
}

// int main(void)
// {
//     char *str = ft_strdup("hello world");
//     printf("%s", str);
// }
