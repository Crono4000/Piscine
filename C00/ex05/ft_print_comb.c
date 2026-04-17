/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:50:24 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/28 11:50:34 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_combination(int a1, int a2, int a3, int ss)
{
	char	c;

	if (ss)
	{
		write(1, ", ", 2);
	}
	c = a1 + 48;
	write(1, &c, 1);
	c = a2 + 48;
	write(1, &c, 1);
	c = a3 + 48;
	write(1, &c, 1);
}

void	ft_print_comb(void)
{
	int	ss;
	int	x;
	int	y;
	int	z;

	ss = 0;
	x = 0;
	while (x <= 7)
	{
		y = x + 1;
		while (y <= 8)
		{
			z = y + 1;
			while (z <= 9)
			{
				print_combination(x, y, z, ss);
				z++;
				ss++;
			}
			y++;
		}
		x++;
	}
}
