/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:12:40 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/29 16:31:15 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = (int)(a / b);
	*mod = a % b;
}

/*int main()
{
	int div = 1;
	int mod = 6;
	ft_div_mod(23, 4, &div, &mod);
	printf("a:%d\n", div);
	printf("b:%d\n", mod);
}*/
