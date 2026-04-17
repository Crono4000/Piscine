/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:31:26 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/10 16:31:26 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	ss;

	if (min >= max)
		return ((int *) 0);
	ss = 0;
	range = (int *) malloc(sizeof(int) * (max - min));
	if (range == 0)
		return ((int *) 0);
	while (min < max)
	{
		range[ss] = min;
		ss++;
		min++;
	}
	return (range);
}

/*#include <stdio.h>

void print_int_arrays(int *array, int size)
{
    int yy;

    yy = 0;
    while (yy < size)
    {
        printf("number:%d\n", array[yy]);
        yy++;
    }
}

int main()
{
    print_int_arrays(ft_range(-100, -20), 80);
}*/
