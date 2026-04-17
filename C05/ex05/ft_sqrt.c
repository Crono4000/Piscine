/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 14:57:40 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/04 19:05:56 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_sqrt_recursive(int index, float nb)
{
	float	rr;

	if (index == 0)
		return (nb / 2);
	rr = ft_sqrt_recursive(index - 1, nb);
	return ((rr + (nb / rr)) / 2);
}

int	ft_sqrt(int nb)
{
	float	ss;

	ss = ft_sqrt_recursive(30, (float) nb);
	if (ss != (float)((int) ss))
		return (0);
	return ((int) ss);
}

/*#include <stdio.h>

int main()
{
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(5));
	printf("%d\n", ft_sqrt(9));
	printf("%d\n", ft_sqrt(100000000));
}*/