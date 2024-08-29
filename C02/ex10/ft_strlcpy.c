/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/25 13:02:10 by itham             #+#    #+#             */
/*   Updated: 2024/08/29 13:10:50 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	src_len;
	unsigned int	copy_len;
	unsigned int	ctr;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	if (size > 0)
	{
		copy_len = size -1;
		if (copy_len > src_len)
			copy_len = src_len;
		ctr = 0;
		while (ctr < copy_len)
		{
			dest[ctr] = src[ctr];
			ctr++;
		}
		dest[ctr] = '\0';
	}
	return (src_len);
}

int main(void)
{
    char dest[12];
    char src[] = "hello world";

    // Call ft_strlcpy and print the results
    unsigned int len = ft_strlcpy(dest, src, sizeof(dest));
    printf("Output is : %u\n", len); // %u for unsigned int
    printf("Dest string is: %s\n", dest); // Print the destination string

    return 0;
}
