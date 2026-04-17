/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/10 16:47:25 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/10 16:47:25 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	ss;

	if (min >= max)
	{
		*range = ((int *) 0);
		return (0);
	}
	ss = 0;
	*range = (int *) malloc(sizeof(int) * (max - min));
	if (*range == NULL)
		return (-1);
	while (min + ss < max)
	{
		range[0][ss] = min + ss;
		ss++;
	}
	return (max - min);
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
    int gg = 40;
    int *uu;
    uu = &gg;
    ft_ultimate_range(&uu, 0, 5);
    print_int_arrays(uu, 5);
}*/
