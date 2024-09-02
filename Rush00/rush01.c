/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/24 16:07:11 by itham             #+#    #+#             */
/*   Updated: 2024/08/25 18:38:43 by shauchan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int		i;
	int		j;

	if (x <= 0 || y <= 0)
		return ;
	i = 0;
	while (i < y)
	{
		j = 0;
		while (j < x)
		{
			if (i + j == 0 || (i + j == x + y - 2 && (x > 1 && y > 1)))
				ft_putchar('/');
			else if ((i == y - 1 && j == 0) || (i == 0 && j == x - 1))
				ft_putchar('\\');
			else if (i == 0 || i == y -1 || j == 0 || j == x -1)
				ft_putchar('*');
			else
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
