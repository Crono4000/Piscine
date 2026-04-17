/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 19:14:40 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/02 20:22:50 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	yy;
	int	tt;

	yy = 0;
	tt = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[yy])
	{
		if (str[yy] == to_find[tt])
		{
			tt++;
			if (!to_find[tt])
				return (str + yy - tt + 1);
		}
		else
		{
			tt = 0;
		}
		yy++;
	}
	return ((void *)0);
}

/*#include <stdio.h>

int main()
{
	char oo[] = "tou aqui a falar portugues.";
	char ii[] = "a ";

	printf("%s\n", ft_strstr(oo, ii));
}*/