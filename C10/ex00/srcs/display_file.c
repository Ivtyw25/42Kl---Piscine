/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display_file.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 08:09:51 by itham             #+#    #+#             */
/*   Updated: 2024/09/05 08:29:00 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(char *file_name)
{
	int		fd;
	char	buf;

	fd = open(file_name, O_RDONLY);
	if (fd == -1)
	{
		write(2, &"Cannot read file.", 18);
	}
	if (fd > 0)
		while (read(fd, &buf, 1))
			write(1, &buf, 1);
	close(fd);
}
