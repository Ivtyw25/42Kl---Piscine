/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_advanced_sort_string_tab.c                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:54:19 by itham             #+#    #+#             */
/*   Updated: 2024/09/06 12:13:06 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_advanced_sort_string_tab(char **tab, int (*cmp)(char *, char*))
{
	int		i;
	int		j;
	int		min;
	char	*temp;

	i = 0;
	while (tab[i])
	{
		min = i;
		j = i + 1;
		while (tab[j])
		{
			if (cmp(tab[min], tab[j]) > 0)
				min = j;
			j++;
		}
		if (tab[i] != tab[min])
		{
			temp = tab[min];
			tab[min] = tab[i];
			tab[i] = temp;
		}
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i]) != '\0')
	{
		if (s1[i] == s2[i])
			i++;
		else
			return (s1[i] - s2[i]);
	}
	return (0);
}

// int main(void)
// {
//     char *temp[5] = {"zfji", "sjif", "jafid", "jfds", 0};
//     ft_advanced_sort_string_tab(temp, &ft_strcmp);
//     int i = 0;
//     while (temp[i])
//     {
//         printf("%s ", temp[i]);
//         i++;
//     }
// }
