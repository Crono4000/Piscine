/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:22:54 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/02 20:24:51 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	yy;
	int	xx;

	xx = 0;
	yy = 0;
	while (dest[xx])
		xx++;
	while (src[yy])
	{
		dest[xx + yy] = src[yy];
		yy++;
	}
	dest[xx + yy] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main()
{
	char oo[15] = "tou ";
	char ii[] = "boà fixe.";

	ft_strcat(oo, ii);
	printf("%s\n", oo);
}*/