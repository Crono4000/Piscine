/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/06 20:40:27 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/06 20:42:31 by afranco-         ###   ########.fr       */
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

	qq = 1;
	while (qq < argc)
	{
		ft_putstr(argv[qq]);
		write(1, "\n", 1);
		qq++;
	}
}
