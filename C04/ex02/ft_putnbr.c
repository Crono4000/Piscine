/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 11:56:02 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/03 20:31:29 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	long_ft_putnbr(long nb)
{
	char	c;

	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb > 9)
	{
		long_ft_putnbr(nb / 10);
	}
	c = 48 + (nb % 10);
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long_ft_putnbr((long) nb);
}

/*int main()
{
	ft_putnbr(45008);
	ft_putnbr(10000);
	ft_putnbr(-2147483648);
}*/
