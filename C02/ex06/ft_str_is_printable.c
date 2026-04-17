/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:02:47 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/31 22:02:47 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	rr;

	rr = 0;
	while (str[rr] != '\0')
	{
		if ((str[rr] >= 0 && str[rr] < 32) || str[rr] == 127)
		{
			return (0);
		}
		rr++;
	}
	return (1);
}

/*#include <stdio.h>

int main() {
    char str1[] = "Olá, mundo!";
    char str2[] = "Texto com\nquebra de linha";
    char str3[] = "Texto com\ttabulação";
    char str4[] = "Tudo está imprimível!";
    char str5[] = "\x01\x02\x03"; // Caracteres não imprimíveis

    printf("Resultado para \"%s\": %d\n", str1, ft_str_is_printable(str1));
    printf("Resultado para \"%s\": %d\n", str2, ft_str_is_printable(str2));
    printf("Resultado para \"%s\": %d\n", str3, ft_str_is_printable(str3));
    printf("Resultado para \"%s\": %d\n", str4, ft_str_is_printable(str4));
    printf("Resultado para \"%s\": %d\n", str5, ft_str_is_printable(str5));

    return 0;
}*/