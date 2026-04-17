/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:45:27 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/04 19:05:14 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index <= 2)
		return (1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

/*#include <stdio.h>

int main()
{
	printf("%d\n", ft_fibonacci(5));
	printf("%d\n", ft_fibonacci(10));
	printf("%d\n", ft_fibonacci(3));
	printf("%d\n", ft_fibonacci(2));
	printf("%d\n", ft_fibonacci(4));
	printf("%d\n", ft_fibonacci(5));
}*/