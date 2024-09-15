/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/26 11:03:20 by itham             #+#    #+#             */
/*   Updated: 2024/08/29 09:03:01 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_buffer_number(unsigned int curr_addr, int buffer[], int index)
{
	if (curr_addr > 16)
		ft_buffer_number(curr_addr / 16, buffer, index + 1);
	buffer[index] = curr_addr % 16;
}

void	ft_print_hex(unsigned int curr_addr)
{
	int	buffer[16];
	int	i;

	i = 0;
	while (i < 16)
	{
		buffer[i] = 0;
		i++;
	}
	ft_buffer_number(curr_addr, buffer, 0);
	i = 0;
	while (i < 16)
	{
		write(1, &"01234567890abcdef"[buffer[15 - i]], 1);
		i++;
	}
}

void	ft_print_safe(unsigned int c)
{
	char	temp;

	temp = (char)c;
	if (c >= 32 && c <= 126)
		write(1, &temp, 1);
	else
		write(1, &".", 1);
}

void	ft_print_memory_at(void *start_addr, char *curr_addr, unsigned int size)
{
	int	i;
	int	temp;

	ft_print_hex((unsigned int)curr_addr);
	write(1, &": ", 2);
	i = 0;
	while (i++ < 16)
	{
		if (start_addr + size <= (void *)(curr_addr + i - 1))
			write(1, &"  ", 2);
		else
		{
			temp = (unsigned char)*(curr_addr + i - 1);
			write(1, &"0123456789abcdef"[temp / 16], 1);
			write(1, &"0123456789abcdef"[temp % 16], 1);
		}
		if (i % 2 == 0)
			write(1, &" ", 1);
	}
	i = 0;
	while (i++ < 16)
	{
		if (start_addr + size > (void *)(curr_addr + i -1))
			ft_print_safe((unsigned char)*(curr_addr + i -1));
	}
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	char	*curr_addr;

	curr_addr = (char *)addr;
	while ((void *)curr_addr < addr + size)
	{
		ft_print_memory_at(addr, curr_addr, size);
		write(1, &"\n", 1);
		curr_addr += 16;
	}
	return (addr);
}

// int	main(void)
// {
// 	char	*str = "hello world.	my name is	ivajhfsfidfjkdsfnsifjnsiofhsdlfn c ";
// 	ft_print_memory(str, 31);
// 	return (0);
// }
