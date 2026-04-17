/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 20:01:17 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/05 18:51:16 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	yy;
	unsigned int	xx;

	xx = 0;
	yy = 0;
	while (xx < size && dest[xx])
		xx++;
	while (src[yy])
	{
		if (xx + yy < size - 1)
			dest[xx + yy] = src[yy];
		if (xx + yy == size - 1)
			dest[xx + yy] = '\0';
		yy++;
	}
	if (xx + yy < size)
		dest[xx + yy] = '\0';
	return (xx + yy);
}

/*#include <stdio.h>

int main()
{
	char oo[10] = "test";
	char ii[] = "test";

	ft_strlcat(oo, ii, 10);
	printf("%s\n", oo);
}*/