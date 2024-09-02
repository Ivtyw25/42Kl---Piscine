/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 07:35:28 by itham             #+#    #+#             */
/*   Updated: 2024/08/31 12:25:56 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	is_valid(int *grid, int c, int r)
{
	int	i;

	i = 0;
	while (i < r)
	{
		if (grid[i] == c || i - grid[i] == r - c || grid[i] + i == r + c)
			return (0);
		i++;
	}
	return (1);
}

void	ft_print_solution(int *grid)
{
	int		i;
	char	temp;

	i = 0;
	while (i < 10)
	{
		temp = grid[i] + 48;
		write(1, &temp, 1);
		i++;
	}
	write(1, &"\n", 1);
}

int	ft_solve(int *grid, int row)
{
	static int	total_solution;
	int			col;

	if (row == 10)
	{
		total_solution++;
		ft_print_solution(grid);
	}
	else
	{
		col = 0;
		while (col < 10)
		{
			if (is_valid(grid, col, row))
			{
				grid[row] = col;
				ft_solve(grid, row +1);
			}
			col++;
		}
	}
	return (total_solution);
}

int	ft_ten_queens_puzzle(void)
{
	int	grid[10];
	int	i;

	i = 0;
	while (i < 10)
	{
		grid[i] = -1;
		i++;
	}
	return (ft_solve(grid, 0));
}

// int	main(void)
// {
// 	int	i;

// 	i = ft_ten_queens_puzzle();
// 	printf("total number of solutions is %d ", i);
// }
