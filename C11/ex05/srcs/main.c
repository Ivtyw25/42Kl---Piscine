/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/06 12:05:49 by itham             #+#    #+#             */
/*   Updated: 2024/09/06 12:09:52 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include "do_op.h"

int	check_op(char c)
{
	if (c == '+' || c == '-' || c == '*' || c == '/' || c == '%')
		return (1);
	return (0);
}

int	operator(int c, char op, int d)
{
	int	r;
	int	(*operator[5])(int, int);

	r = 1;
	operator[0] = &ft_add;
	operator[1] = &ft_sub;
	operator[2] = &ft_mul;
	operator[3] = &ft_div;
	operator[4] = &ft_mod;
	if (op == '+')
		r = operator[0](c, d);
	else if (op == '-')
		r = operator[1](c, d);
	else if (op == '*')
		r = operator[2](c, d);
	else if (op == '/')
		r = operator[3](c, d);
	else if (op == '%')
		r = operator[4](c, d);
	return (r);
}

void	do_op(char *a, char *op, char *b)
{
	int	r;
	int	c;
	int	d;

	r = 1;
	c = ft_atoi(a);
	d = ft_atoi(b);
	if (!check_op(op[0]))
		write(1, &"0", 1);
	else if (op[0] == '/' && d == 0)
		write (1, "Stop : division by zero", 23);
	else if (op[0] == '%' && d == 0)
		write (1, "Stop : modulo by zero", 21);
	else
	{
		r *= (operator(c, op[0], d));
		ft_putnbr(r);
	}
	write(1, &"\n", 1);
}

int	main(int argc, char *argv[])
{
	if (argc == 4)
		do_op(argv[1], argv[2], argv[3]);
	return (0);
}
