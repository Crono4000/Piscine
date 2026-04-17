/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 17:11:21 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/29 19:14:38 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	ii;
	int	middle;
	int	c;

	ii = 0;
	middle = (int)(size / 2);
	while (ii < middle)
	{
		c = tab[ii];
		tab[ii] = tab[size - ii - 1];
		tab[size - ii - 1] = c;
		ii++;
	}
}

/*void print_array(int* arr, int size)
{
	for (int uu = 0; uu < size; uu++)
	{
		printf("%d\n", arr[uu]);
	}
}

int main()
{
	int aa[4] = {2, 3, 4, 5};
	int bb[5] = {2, 3, 9, 4, 5};
	ft_rev_int_tab(aa, 4);
	ft_rev_int_tab(bb, 5);
	print_array(aa, 4);
	print_array(bb, 5);
}*/
