/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:44:29 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/06 20:56:18 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

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

int	main(int argc, char **argv)
{
	int	qq;

	qq = argc - 1;
	while (qq > 0)
	{
		ft_putstr(argv[qq]);
		write(1, "\n", 1);
		qq--;
	}
}
