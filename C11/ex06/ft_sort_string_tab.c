/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_string_tab.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 11:06:42 by itham             #+#    #+#             */
/*   Updated: 2024/09/06 12:10:40 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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

void	ft_sort_string_tab(char **tab)
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
			if (ft_strcmp(tab[min], tab[j]) > 0)
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

// int	main(void)
// {
// 	char **temp = (char **)malloc(sizeof(char *) * 4);
// 	temp[0] = "helli";
// 	temp[1] = "adfhnr";
// 	temp[2] = "shf";
// 	temp[3] = 0;
// 	ft_sort_string_tab(temp);
// 	int i;
// 	i = 0;
// 	while (temp[i])
// 	{
// 		printf("tab[%d] <@ %p> = $%s$\n", i, temp + i, temp[i]);
// 		i++;
// 	}
// 	return (0);
// }
