/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 18:07:36 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/06 20:59:49 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	aa;
	int	bb;

	aa = 0;
	while (aa < size)
	{
		bb = aa;
		if (aa > 0)
		{
			bb--;
		}
		while (tab[bb] > tab[bb + 1])
		{
			ft_swap(tab + bb, tab + bb + 1);
			bb--;
			if (bb < 0)
			{
				break ;
			}
		}
		aa++;
	}
}

/*
#include <unistd.h>

void print_array(int* arr, int size)
{
	for (int uu = 0; uu < size; uu++)
	{
		printf("%d\n", arr[uu]);
	}
}

int main()
{
	int aa[4] = {2, 1, 7, 5};
	int bb[11] = {10, 3, 12, 11, 5, 1, 0, 20, 17, -3, -6};
	ft_sort_int_tab(aa, 4);
	ft_sort_int_tab(bb, 11);
	print_array(aa, 4);
	print_array(bb, 11);
}*/
