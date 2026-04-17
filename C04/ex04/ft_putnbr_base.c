/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 15:24:06 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/11 13:31:26 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	long_ft_putnbr_base(long nb, char *base, long size)
{
	if (nb < 0)
	{
		nb = nb * -1;
		write(1, "-", 1);
	}
	if (nb > size - 1)
	{
		long_ft_putnbr_base(nb / size, base, size);
	}
	write(1, base + (nb % size), 1);
}

int	check_base(char *base)
{
	int	size;
	int	ii;

	size = 0;
	while (base[size])
	{
		if (base[size] == '-' || base[size] == '+')
			return (-1);
		ii = size - 1;
		while (ii > 0)
		{
			if (base[size] == base[ii])
				return (-1);
			ii--;
		}
		size++;
	}
	if (size <= 1)
		return (-1);
	return (size);
}

void	ft_putnbr_base(int nb, char *base)
{
	int	size;

	size = check_base(base);
	if (size == -1)
		return ;
	long_ft_putnbr_base((long) nb, base, (long) size);
}

/*#include <unistd.h>

int main()
{
	ft_putnbr_base(45008, "0123");
	write(1, "\n", 1);

	ft_putnbr_base(-2147483648, "01");
	write(1, "\n", 1);

	ft_putnbr_base(5668654, "0123456789");
	write(1, "\n", 1);

	ft_putnbr_base(115668654, "0123456789ABCDEF");
	write(1, "\n", 1);

	ft_putnbr_base(566, "012");
	write(1, "\n", 1);

	ft_putnbr_base(566, "012345G789");
	write(1, "\n", 1);

	ft_putnbr_base(40, "poneyvif");
	write(1, "\n", 1);

	ft_putnbr_base(0, "01");
	write(1, "\n", 1);

	ft_putnbr_base(123, "01235612");
	write(1, "\n", 1);
}*/