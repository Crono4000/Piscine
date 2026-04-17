/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 21:15:16 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/05 18:46:01 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	put_atoi_inicial_values(char *str, int *rr, int *value, int *minus)
{
	*value = 0;
	*minus = 0;
	*rr = 0;
	while (str[*rr] == ' ' || (str[*rr] >= 9 && str[*rr] <= 13))
		(*rr)++;
	while (str[*rr] == '-' || str[*rr] == '+')
	{
		if (str[*rr] == '-')
			(*minus)++;
		(*rr)++;
	}
}

int	ft_atoi(char *str)
{
	int	rr;
	int	value;
	int	minus;

	put_atoi_inicial_values(str, &rr, &value, &minus);
	while (str[rr] != '\0')
	{
		if (str[rr] >= 48 && str[rr] <= 57)
		{
			value = value * 10;
			value += str[rr] - 48;
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
	printf("%d\n", ft_atoi("  -22341"));
	printf("%d\n", ft_atoi("340000"));
	printf("%d\n", ft_atoi("999999999"));
	printf("%d\n", ft_atoi("--+503"));
}*/