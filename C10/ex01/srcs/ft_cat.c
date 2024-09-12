/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 09:09:22 by itham             #+#    #+#             */
/*   Updated: 2024/09/09 09:40:05 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_cat.h"
#include <fcntl.h>
#include <libgen.h>
#include <sys/errno.h>
#include <string.h>
#include <unistd.h>

void	ft_cat(char *filename)
{
	char	*buffer[29000];
	int		fd;
	int		buf_read;

	errno = 0;
	fd = open(filename, O_RDONLY);
	if (errno)
	{
		ft_putstr("ft_cat: ");
		ft_putstr(basename(filename));
		ft_putstr(": ");
		ft_putstr(strerror(errno));
		write(1, "\n", 1);
		return ;
	}
	buf_read = read(fd, buffer, 29000);
	write(1, &buffer, buf_read);
}
