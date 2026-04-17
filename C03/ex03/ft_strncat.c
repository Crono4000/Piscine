/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:57:32 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/02 19:14:53 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	yy;
	unsigned int	xx;

	xx = 0;
	yy = 0;
	while (dest[xx])
		xx++;
	while (src[yy] && yy < nb)
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
	char oo[10] = "tou ";
	char ii[] = "boà fixe.";

	ft_strcat(oo, ii);
	printf("%s\n", oo);
}*/