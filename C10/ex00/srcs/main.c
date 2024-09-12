/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 07:58:25 by itham             #+#    #+#             */
/*   Updated: 2024/09/05 08:28:08 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include "display_file.h"

int	main(int argc, char *argv[])
{
	if (argc < 2)
		ft_puterr("File name is missing.");
	else if (argc > 2)
		ft_puterr("Too many arguments.");
	else
		display_file(argv[1]);
	return (0);
}
