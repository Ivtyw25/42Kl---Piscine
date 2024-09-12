/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 12:27:19 by itham             #+#    #+#             */
/*   Updated: 2024/09/06 08:04:46 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_len(char *src)
{
	int	i;

	i = 0;
	while (src[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*temp;
	int		i;

	temp = (char *)malloc(sizeof(char) * (ft_len(src) + 1));
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
	temp[i] = '\0';
	return (temp);
}

// int main(void)
// {
//     char *str = ft_strdup("hello world");
//     printf("%s", str);
// }
