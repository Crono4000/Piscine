/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 18:03:42 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/29 20:26:55 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	get_power(int n)
{
	int	power;

	power = 1;
	while (n > 1)
	{
		power = power * 10;
		n--;
	}
	return (power);
}

void	ft_putnbr(int nb, int n)
{
	char	c;
	int		power;
	int		o;

	power = get_power(n);
	o = 0;
	while (power > 0)
	{
		o = (int)(nb / power);
		c = o + 48;
		nb -= o * power;
		power = (int)(power / 10);
		write(1, &c, 1);
	}
}

int	get_qu(int nn, int n, int nu)
{
	if (nn != n - 1)
	{
		return ((nu % 10) + 1);
	}
	else
	{
		return (0);
	}
}

void	recursive_comb(int nu, int nn, int n, int max)
{
	int	qu;

	qu = get_qu(nn, n, nu);
	nu = (nu * 10);
	max = (max * 10) + (10 - nn - 1);
	while (qu <= 9 && qu <= max)
	{
		if (nn == 0)
		{
			ft_putnbr(nu + qu, n);
			if (nu + qu != max)
			{
				write(1, ", ", 2);
			}
		}
		else
		{
			recursive_comb(nu + qu, nn - 1, n, max);
		}
		qu++;
	}
}

void	ft_print_combn(int n)
{
	if (n <= 0 || n >= 10)
	{
		return ;
	}
	recursive_comb(0, n - 1, n, 0);
}

//int main() {
//	ft_print_combn(3);
//	ft_print_combn(2);
//	ft_print_combn(1);
//}
