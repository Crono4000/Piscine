/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 17:05:51 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/10 17:05:51 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	size;

	size = 0;
	while (str[size])
		size++;
	return (size);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		ii;
	int		ff;
	char	*final;

	ii = 0;
	ff = 1;
	while (ii < size)
	{
		if (ii != 0)
			ff += ft_strlen(sep);
		ff += ft_strlen(strs[ii]);
		ii++;
	}
	final = (char *) malloc(sizeof(char) * ff);
	final[0] = '\0';
	ii = 0;
	while (ii < size)
	{
		if (ii != 0)
			ft_strcat(final, sep);
		ft_strcat(final, strs[ii]);
		ii++;
	}
	return (final);
}

/*#include <stdio.h>

int main()
{
	char **tt;
	tt = (char **) malloc(sizeof(char*) * 1);
	tt[0] = "Hello";
	//tt[1] = "world";
	//tt[2] = "!";

	printf("%s\n", ft_strjoin(1, tt, ","));
}*/
