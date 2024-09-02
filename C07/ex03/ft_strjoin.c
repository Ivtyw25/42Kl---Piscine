/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:40:38 by itham             #+#    #+#             */
/*   Updated: 2024/09/02 12:32:33 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	ft_len(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	compute_total_len(int size, char **strs, char *sep)
{
	int	total_len;
	int	i;

	i = 0;
	total_len = 0;
	while (i < size)
	{
		total_len += ft_len(strs[i]);
		i++;
	}
	total_len = total_len + ((size -1) * ft_len(sep));
	return (total_len);
}

void	ft_cpy(char *temp, char *str)
{
	int i;

	i = 0;
	while (i < ft_len(str))
	{
		temp[i] = str[i];
		i++;
	}
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*temp;
	char	*string;
	int		total_len;
	int		i;

	if (size == 0)
		return ((char *)malloc(sizeof(char)));
	total_len = compute_total_len(size, strs, sep);
	string = (char *)malloc(sizeof(char) * (total_len +1));
	if (!string)
		return (NULL);
	temp = string;
	i = -1;
	while (++i < size)
	{
		ft_cpy(temp, strs[i]);
		temp += ft_len(strs[i]);
		if (i < size -1)
		{
			ft_cpy(temp, sep);
			temp += ft_len(sep);
		}
	}
	*temp = '\0';
	return (string);
}


// int main(void) 
// {
//     char *str[] = {"hi", "hello", "hi", "world"};
//     char *sep = "-";
//     int size = 4;
//     char *temp = ft_strjoin(size, str, sep);
//     if (temp) {
//         printf("%s\n", temp);
//         free(temp);  // Free the allocated memory
//     }
//     return 0;
// }
