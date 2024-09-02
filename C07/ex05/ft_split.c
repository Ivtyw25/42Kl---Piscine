/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:29:59 by itham             #+#    #+#             */
/*   Updated: 2024/09/02 14:39:08 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> 

int	check_sep(char c, char *sep)
{
	int	i;

	i = 0;
	if (c <= 32 || c == 127)
		return (1);
	while (sep[i])
	{
		if (sep[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int	total_len(char *str, char *sep)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && (check_sep(str[i], sep)))
			i++;
		if (str[i])
			count++;
		while (str[i] && !(check_sep(str[i], sep)))
			i++;
	}
	return (count);
}

void	ft_fill(char *str, char *fill, int len)
{
	int	i;

	i = 0;
	while (i < len)
	{
		str[i] = fill[i]; 
		i++;
	}
	str[i] = '\0';
}

void	ft_join(char **temp, char *str, char *charset, int num)
{
	int	i;
	int	j;
	int	k;
	int	len;

	i = 0;
	j = 0;
	while (i < num)
	{
		while (str[j] && check_sep(str[j], charset))
			j++;
		k = j;
		len = 0;
		while (str[j] && !(check_sep(str[j], charset)))
		{
			len++;
			j++;
		}
		temp[i] = (char *)malloc(sizeof(char) * (len + 1));
		ft_fill(temp[i], str + k, len);
		i++;
	}
	temp[i] = 0;
}

char	**ft_split(char *str, char *charset)
{
	char	**temp;
	int		num;

	if (str[0] == '\0')
	{
		temp = (char **)malloc(sizeof(char *) * 1);
		temp[0] = 0;
		return (temp);
	}
	else if (charset[0] == '\0')
	{
		temp = (char **)malloc(sizeof(char *) * 2);
		temp[1] = 0;
		ft_join(temp, str, charset, 1);
		return (temp);
	}
	else
	{
		num = total_len(str, charset);
		temp = (char **)malloc(sizeof(char *) * (num + 1));
		temp[num] = 0;
		ft_join(temp, str, charset, num);
	}
	return (temp);
}

// int main(void)
// {
//     struct {
//         char *str;
//         char *charset;
//         char **expected;
//     } tests[] = {
//         {"hello,,,,world", ",", (char *[3]) {"hello", "world", 0}},
//         {",,hello,world,,", ",", (char *[3]) {"hello", "world", 0}},
//         {"hello", "", (char *[2]) {"hello", 0}},
//         {NULL, NULL, NULL}
//     };

//     for (int t = 0; tests[t].str != NULL; t++) {
//         char **result = ft_split(tests[t].str, tests[t].charset);
//         for (int i = 0; result[i] != NULL; i++) {
//             printf("%s,", result[i]);
//         }
//         printf("\n");
//         // Free allocated memory
//         for (int i = 0; result[i] != NULL; i++) {
//             free(result[i]);
//         }
//         free(result);
//     }
//     return 0;
// }
