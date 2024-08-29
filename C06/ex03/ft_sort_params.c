/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/28 12:11:24 by itham             #+#    #+#             */
/*   Updated: 2024/08/28 12:56:16 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int     ft_strcmp(char *s1, char *s2)
{
        int     i;

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

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	write(1, &"\n", 1);
}

int	main(int ac, char *av[])
{
    int i;
    int j;
    int size;
    int min;
    char *temp;

    temp = NULL;
    size = ac;
    i = 1;
    while (i < size - 1)
    {
        min = i;
        j = i + 1;
        while (j < size)
        {
            if (ft_strcmp(av[min], av[j]) > 0)
                min = j;
            j++;
        }
        if (av [i] != av[min])
        {
            temp = av[min];
            av[min] = av[i];
            av[i] = temp;
        }
        i++;
    }

    i = 1;
	while (i < ac)
	{
		ft_putstr(av[i]);
		i++;
	}
	return (0);
}
