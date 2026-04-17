/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 13:40:05 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/04 19:04:32 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	value;

	if (power < 0)
		return (0);
	value = 1;
	while (power > 0)
	{
		value = value * nb;
		power--;
	}
	return (value);
}
