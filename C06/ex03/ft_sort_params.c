/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:56:36 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/06 21:07:34 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	rr;

	rr = 0;
	while (s1[rr] != '\0' || s2[rr] != '\0')
	{
		if (s1[rr] != s2[rr])
			return (s1[rr] - s2[rr]);
		rr++;
	}
	return (0);
}

void	ft_putstr(char *str)
{
	int	current;

	current = 0;
	while (str[current] != '\0')
	{
		write(1, str + current, 1);
		current++;
	}
}

void	ft_sort_int_tab(char **tab, int size)
{
	int		aa;
	int		bb;
	char	*temp;

	aa = 1;
	while (aa < size)
	{
		bb = aa;
		if (aa > 1)
		{
			bb--;
		}
		while (ft_strcmp(tab[bb], tab[bb + 1]) > 0)
		{
			temp = tab[bb];
			tab[bb] = tab[bb + 1];
			tab[bb + 1] = temp;
			bb--;
			if (bb < 1)
				break ;
		}
		aa++;
	}
}

int	main(int argc, char **argv)
{
	int	qq;

	ft_sort_int_tab(argv, argc);
	qq = 1;
	while (qq < argc)
	{
		ft_putstr(argv[qq]);
		write(1, "\n", 1);
		qq++;
	}
}
