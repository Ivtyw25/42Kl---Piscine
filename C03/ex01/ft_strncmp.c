/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 12:52:29 by itham             #+#    #+#             */
/*   Updated: 2024/08/29 07:18:57 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		if (s1[i] == s2[i] && (s1[i] != '\0' && s2[i] != '\0'))
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

// int	main(void)
// {
// 	char *s1 = "hello ";
// 	char *s2 = "hell";

// 	printf("%d ", ft_strncmp(s1,s2,6));
// }
