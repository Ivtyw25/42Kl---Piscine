/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 14:40:38 by itham             #+#    #+#             */
/*   Updated: 2024/08/29 16:16:28 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>  // For strlen function

int ft_len(char *str) {
    int i = 0;
    while (str[i])
        i++;
    return i;
}

void ft_strcat(char *dest, const char *src) {
    int i = 0;
    while (dest[i] != '\0')
        i++;
    int j = 0;
    while (src[j] != '\0') {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
}

void ft_change(char *temp, char **strs, int size, char *sep) {
    int i = 0;
    int pos = 0;
    int seplen = ft_len(sep);

    while (i < size) {
        int strlen = ft_len(strs[i]);
        ft_strcat(temp + pos, strs[i]);
        pos += strlen;

        if (i < size - 1) {
            ft_strcat(temp + pos, sep);
            pos += seplen;
        }
        i++;
    }
}

char *ft_strjoin(int size, char **strs, char *sep) {
    if (size == 0) {
        char *empty_str = (char *)malloc(sizeof(char));
        if (empty_str) {
            empty_str[0] = '\0';
        }
        return empty_str;
    }

    int ctr = 0;
    int mallocSize = 0;
    while (ctr < size) {
        mallocSize += ft_len(strs[ctr]);
        ctr++;
    }
    mallocSize += ft_len(sep) * (size - 1);  
    char *temp = (char *)malloc(sizeof(char) * (mallocSize + 1));
    if (!temp)
        return NULL;

    ft_change(temp, strs, size, sep);
    return (temp);
}

// int main(void) {
//     char *str[] = {"", "hello", "", "world"};
//     char *sep = "-";
//     int size = 4;
//     char *temp = ft_strjoin(size, str, sep);
//     if (temp) {
//         printf("%s\n", temp);
//         free(temp);  // Free the allocated memory
//     }
//     return 0;
// }
