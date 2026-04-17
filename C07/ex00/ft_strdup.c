/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:18:01 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/10 16:18:01 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*new;
	int		size;
	int		ii;

	size = 0;
	while (src[size])
		size++;
	new = (char *) malloc(sizeof(char) * (size + 1));
	ii = 0;
	while (ii < size + 1)
	{
		new[ii] = src[ii];
		ii++;
	}
	return (new);
}

/*#include <stdio.h>

int main()
{
    char *ss = ft_strdup("222 é grande");
    printf("%s\n", ss);
}*/
