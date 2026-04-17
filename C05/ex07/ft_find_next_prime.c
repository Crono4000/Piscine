/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:02:21 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/04 19:58:07 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

float	ft_sqrt_recursive(int index, float nb)
{
	float	rr;

	if (index == 0)
		return (nb / 2);
	rr = ft_sqrt_recursive(index - 1, nb);
	return ((rr + (nb / rr)) / 2);
}

int	ft_is_prime(int nb)
{
	int	root;
	int	oo;

	oo = 2;
	if (nb < 0 || nb == 0 || nb == 1)
		return (0);
	root = (int) ft_sqrt_recursive(20, (float) nb);
	while (oo <= root)
	{
		if (nb % oo == 0)
			return (0);
		oo++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
