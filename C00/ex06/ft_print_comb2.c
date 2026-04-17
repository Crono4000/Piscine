/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:50:24 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/28 11:50:34 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_two_digits_number(int ma)
{
	char	a1;
	char	a2;

	a1 = ma % 10;
	a2 = (ma - (ma % 10)) / 10;
	a1 += 48;
	a2 += 48;
	write(1, &a2, 1);
	write(1, &a1, 1);
}

void	ft_print_comb2(void)
{
	int	n1;
	int	n2;

	n1 = 0;
	n2 = 0;
	while (n1 < 100)
	{
		n2 = n1 + 1;
		while (n2 < 100)
		{
			if (n1 != 0 || n2 != 1)
			{
				write(1, ", ", 2);
			}
			print_two_digits_number(n1);
			write(1, " ", 1);
			print_two_digits_number(n2);
			n2++;
		}
		n1++;
	}
}
