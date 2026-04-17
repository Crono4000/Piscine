/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:28:39 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/29 19:13:49 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	aa;
	int	bb;

	aa = *a;
	bb = *b;
	*a = (int)(aa / bb);
	*b = aa % bb;
}

/*int main()
{
	int div = 23;
	int mod = 4;
	ft_ultimate_div_mod(&div, &mod);
	printf("a:%d\n", div);
	printf("b:%d\n", mod);
}*/