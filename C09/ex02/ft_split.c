/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: itham <itham@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/02 12:29:59 by itham             #+#    #+#             */
/*   Updated: 2024/09/12 12:28:49 by itham            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h> 

int	check_sep(char c, char *sep)
{
	int	i;

	i = 0;
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

// #include <stdlib.h>
// #include <stdio.h>

// void run_tests(void)
// {
//     char *test_cases[] = {
//         "zhZ3UOicHV9RWe ZTpJ9RomPZMDYOR SFQ32YvZx2a", // Basic test case
//         "NoDelimitersHere",         // No delimiters
//         "+++|||^^^",                // Only delimiters
//         "",                         // Empty string
//         "+Hello+World+",            // Delimiters at the beginning and end
//         "Hello+++World||this is^cool", // Consecutive delimiters
//         "+|^+|^",                   // Delimiters as separate words
//         "Hello World This Is Test",  // Spaces as delimiters
//         "a+b|c+d^e",                // Mixed character delimiters
//         "EndWithDelimiter+"         // Delimiters at the end
//     };

//     char *delimiters[] = {
//         "vLT3imUV",  // Test 1
//         "+|^",  // Test 2
//         "+|^",  // Test 3
//         "+|^",  // Test 4
//         "+",    // Test 5
//         "+|^",  // Test 6
//         "+|^",  // Test 7
//         " ",    // Test 8
//         "+|^",  // Test 9
//         "+"     // Test 10
//     };

//     int num_tests = 10;

//     for (int i = 0; i < num_tests; i++)
//     {
//         printf("Test Case %d: \n", i + 1);
//         char **result = ft_split(test_cases[i], delimiters[i]);
//         if (result != NULL)
//         {
//             int j = 0;
//             while (result[j] != NULL)
//             {
//                 printf("  Result: %s\n", result[j]);
//                 free(result[j]);
//                 j++;
//             }
//             free(result);
//         }
//         else
//         {
//             printf("  No output\n");
//         }
//         printf("\n");
//     }
// }

// int main(void)
// {
//     run_tests();
//     return 0;
// }
