/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:30:46 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/15 20:32:49 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	check_base(char *base);
int	ft_atoi_base(char *str, char *base, int size);

void	long_ft_putnbr_base(long nb, char *base, long size, char *mal)
{
	if (nb > size - 1)
		long_ft_putnbr_base(nb / size, base, size, mal - 1);
	mal[0] = base[nb % size];
}

int	get_number_dim(long ff, long base)
{
	int		dim;
	long	power;

	power = 1;
	dim = 1;
	if (ff < 0)
	{
		ff *= -1;
		dim++;
	}
	while (power < ff)
	{
		power *= base;
		dim++;
	}
	return (dim);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		size1;
	int		size2;
	int		value;
	char	*final;
	int		goo;

	size1 = check_base(base_from);
	size2 = check_base(base_to);
	if (size1 == -1 || size2 == -1 || !size1 || !size2)
		return ((char *) 0);
	value = ft_atoi_base(nbr, base_from, size1);
	goo = get_number_dim((long) value, (long) size2);
	final = (char *) malloc(sizeof(char) * (goo + 1));
	if (value < 0)
	{
		final[0] = '-';
		value *= -1;
	}
	long_ft_putnbr_base((long) value, base_to, size2, final + goo - 2);
	final[goo] = '\0';
	return (final);
}

#include <stdio.h>

void print_int_arrays(char *array, int size)
{
    int yy;

    yy = 0;
    while (yy < size)
    {
        printf("number:%d\n", (int) array[yy]);
        yy++;
    }
}

int main()
{
	char *gg;
	
	gg = ft_convert_base("1001010", "01", "0123456789");
	printf("%s\n", gg);

	gg = ft_convert_base("0", "01", "0123456789");
	printf("%s\n", gg);
}
