/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/03 21:15:52 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/04 13:25:29 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_atoi_inicial_values(char *str, int *rr, int *value, int *minus)
{
	*value = 0;
	*minus = 0;
	*rr = 0;
	while (str[*rr] == ' ')
		(*rr)++;
	while (str[*rr] == '-' || str[*rr] == '+')
	{
		if (str[*rr] == '-')
			(*minus)++;
		(*rr)++;
	}
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

int	get_value_base(char c, char *base)
{
	int	rr;

	rr = 0;
	while (base[rr])
	{
		if (base[rr] == c)
			return (rr);
		rr++;
	}
	return (-1);
}

int	ft_atoi_base(char *str, char *base)
{
	int	rr;
	int	value;
	int	minus;
	int	size;
	int	extra;

	size = check_base(base);
	put_atoi_inicial_values(str, &rr, &value, &minus);
	if (!size)
		return (value);
	while (str[rr] != '\0')
	{
		extra = get_value_base(str[rr], base);
		if (extra != -1)
		{
			value = (value * size) + get_value_base(str[rr], base);
			rr++;
			continue ;
		}
		break ;
	}
	if (minus % 2 == 1)
		value = value * -1;
	return (value);
}

/*#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi_base("  -22341", "0123456789"));
	printf("%d\n", ft_atoi_base("340000", "0123456789"));
	printf("%d\n", ft_atoi_base("999999999", "0123456789"));
	printf("%d\n", ft_atoi_base("--+503", "0123456789"));
	printf("%d\n", ft_atoi_base("10001", "01"));
	printf("%d\n", ft_atoi_base("10001", "01"));
}*/
