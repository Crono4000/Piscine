/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 14:09:18 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/06 20:57:19 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	rr;

	rr = 0;
	while (s1[rr] != '\0' || s2[rr] != '\0')
	{
		if (s1[rr] != s2[rr])
			return (s1[rr] - s2[rr]);
		rr++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>

int main()
{
	char str1[4] = "ffa";
	char str2[5] = "faf";
	char str3[4] = "fbf";
	char str4[5] = "ffa";
	char str5[5] = "ffah";

	printf("%d\n", ft_strcmp(str1, str4));
	printf("%d\n", ft_strcmp(str2, str3));
	printf("%d\n", ft_strcmp(str1, str5));
	printf("%d\n", ft_strcmp(str5, str1));
}*/
