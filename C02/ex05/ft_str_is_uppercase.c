/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 21:55:40 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/31 21:55:40 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	rr;

	rr = 0;
	while (str[rr] != '\0')
	{
		if (str[rr] < 65 || str[rr] > 90)
		{
			return (0);
		}
		rr++;
	}
	return (1);
}

/*#include <stdio.h>
int main() {
    char str1[] = "HELLO";
    char str2[] = "Hello";
    char str3[] = "123ABC";
    char str4[] = "HELLO WORLD!";
    char str5[] = "";

    printf("Resultado para \"%s\": %d\n", str1, ft_str_is_uppercase(str1));
    printf("Resultado para \"%s\": %d\n", str2, ft_str_is_uppercase(str2));
    printf("Resultado para \"%s\": %d\n", str3, ft_str_is_uppercase(str3));
    printf("Resultado para \"%s\": %d\n", str4, ft_str_is_uppercase(str4));
    printf("Resultado para \"%s\": %d\n", str5, ft_str_is_uppercase(str5));

    return 0;
}*/