/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 10:25:59 by itham             #+#    #+#             */
/*   Updated: 2024/08/25 18:40:40 by shauchan         ###   ########.fr       */
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
				ft_putchar('A');
			else if ((i == 0 && j == x -1) || (i == y -1 && j == 0))
				ft_putchar('C');
			else if (i == 0 || i == y -1 || j == 0 || j == x -1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			j++;
		}
		i++;
		ft_putchar('\n');
	}
}
