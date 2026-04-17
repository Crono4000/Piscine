/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 20:12:58 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/12 14:17:00 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_eatable(char *cha, int gg, int dim)
{
	int	pp;
	int	ss;

	pp = 0;
	while (pp < dim)
	{
		ss = cha[pp] - 48;
		if (gg == ss + dim - pp)
			return (1);
		if (gg == ss - dim + pp)
			return (1);
		if (gg == ss)
			return (1);
		pp++;
	}
	return (0);
}

int	ft_ten_queens_puzzle_recursive(int yy, char *dix)
{
	int	gg;
	int	size;

	size = 0;
	gg = 0;
	if (yy == 10)
	{
		write(1, dix, 10);
		write(1, "\n", 1);
		return (1);
	}
	while (gg < 10)
	{
		if (is_eatable(dix, gg, yy))
		{
			gg++;
			continue ;
		}
		dix[yy] = 48 + gg;
		size += ft_ten_queens_puzzle_recursive(yy + 1, dix);
		gg++;
	}
	return (size);
}

int	ft_ten_queens_puzzle(void)
{
	char	printable[10];

	return (ft_ten_queens_puzzle_recursive(0, printable));
}

#include <stdio.h>

int main()
{
	int ss = ft_ten_queens_puzzle();
	printf("%d\n", ss);
}