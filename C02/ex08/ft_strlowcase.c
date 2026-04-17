/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:25:55 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/31 22:25:55 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	rr;

	rr = 0;
	while (str[rr] != '\0')
	{
		if (str[rr] >= 65 && str[rr] <= 90)
		{
			str[rr] += 32;
		}
		rr++;
	}
	return (str);
}

/*#include <stdio.h>

int main() {
    char str1[] = "OLÁ, COMO VAI VOCÊ?";
    char str2[] = "EU ESTOU BEM!";
    char str3[] = "TeSTe De FuNçÕeS!";

    printf("Antes: %s\n", str1);
    printf("Depois: %s\n", ft_strlowcase(str1));

    printf("Antes: %s\n", str2);
    printf("Depois: %s\n", ft_strlowcase(str2));

    printf("Antes: %s\n", str3);
    printf("Depois: %s\n", ft_strlowcase(str3));

    return 0;
}*/