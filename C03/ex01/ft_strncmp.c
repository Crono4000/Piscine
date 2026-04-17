/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:14:26 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/03 20:14:38 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	rr;

	rr = 0;
	while (rr < n && (s1[rr] != '\0' || s2[rr] != '\0'))
	{
		if (s1[rr] != s2[rr])
			return (s1[rr] - s2[rr]);
		rr++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int main()
{
	char str1[4] = "123";
	char str2[5] = "12345";
	char str3[4] = "fbf";
	char str4[5] = "ffa";
	char str5[5] = "ffah";

	printf("%d\n", ft_strncmp(str1, str2, 5));
	printf("%d\n", strncmp(str1, str2, 5));
	printf("%d\n", ft_strncmp(str2, str3, 2));
	printf("%d\n", ft_strncmp(str1, str5, 3));
	printf("%d\n", ft_strncmp(str5, str1, 4));
}*/