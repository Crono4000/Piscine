/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 21:49:00 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/31 21:49:00 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	rr;

	rr = 0;
	while (str[rr] != '\0')
	{
		if (str[rr] < 48 || str[rr] > 57)
		{
			return (0);
		}
		rr++;
	}
	return (1);
}

/*#include <stdio.h>

int main() {
    char str1[] = "he778o";
    char str2[] = "---7738";
    char str3[] = "123abc";
    char str4[] = "88889";
    char str5[] = "5667778";

    printf("Resultado para \"%s\": %d\n", str1, ft_str_is_lowercase(str1));
    printf("Resultado para \"%s\": %d\n", str2, ft_str_is_lowercase(str2));
    printf("Resultado para \"%s\": %d\n", str3, ft_str_is_lowercase(str3));
    printf("Resultado para \"%s\": %d\n", str4, ft_str_is_lowercase(str4));
    printf("Resultado para \"%s\": %d\n", str5, ft_str_is_lowercase(str5));

    return 0;
}*/