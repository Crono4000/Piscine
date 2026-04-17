/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:56:02 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/29 20:26:17 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

long	get_power(long nb)
{
	long	power;

	if (nb == 0)
	{
		return (1);
	}
	power = (long) 1;
	while (nb > power)
	{
		power = power * 10;
	}
	return ((long)(power / 10));
}

void	ft_putnbr(int nb)
{
	char	c;
	long	power;
	long	ss;
	int		o;

	ss = (long) nb;
	if (nb < 0)
	{
		write(1, "-", 1);
		ss = ss * -1;
	}
	power = get_power(ss);
	o = 0;
	while (power > 0)
	{
		o = (int)(ss / power);
		c = o + 48;
		ss -= (long)(o * power);
		power = (long)(power / 10);
		write(1, &c, 1);
	}
}

/*int main()
{
	ft_putnbr(0);
	ft_putnbr(-2147483648);
}*/
