/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:33:12 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/29 19:14:04 by afranco-         ###   ########.fr       */
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

/*int main()
{
	ft_putstr("vou ao zoo\n");
	ft_putstr("EEEEEEEEE.\n");
}*/
