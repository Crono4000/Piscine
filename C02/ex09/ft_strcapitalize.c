/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:29:02 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/31 22:29:02 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_char(char c)
{
	if (c < 65 || c > 90)
	{
		if (c < 97 || c > 122)
		{
			if (c < 48 || c > 57)
			{
				return (1);
			}
		}
	}
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int	rr;
	int	ww;

	ww = 0;
	rr = 0;
	while (str[rr] != '\0')
	{
		if (is_char(str[rr]))
		{
			ww = 0;
			rr++;
			continue ;
		}
		if (ww == 0 && str[rr] >= 97 && str[rr] <= 122)
			str[rr] -= 32;
		if (ww > 0 && str[rr] >= 65 && str[rr] <= 90)
			str[rr] += 32;
		ww++;
		rr++;
	}
	return (str);
}

/*#include <stdio.h>

int main() {
    char str1[] = "olá, como você está?";
    char str2[] = "EU ESTOU BEM, OBRIGADO!";
    char str3[] = "isso é u}}}TESTE de+capitalizacao";

    printf("Antes: %s\n", str1);
    printf("Depois: %s\n", ft_strcapitalize(str1));

    printf("Antes: %s\n", str2);
    printf("Depois: %s\n", ft_strcapitalize(str2));

    printf("Antes: %s\n", str3);
    printf("Depois: %s\n", ft_strcapitalize(str3));

    return 0;
}*/