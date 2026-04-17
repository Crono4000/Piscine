/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 16:38:30 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/02 21:13:29 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strlen(char *str)
{
	int	current;

	current = 0;
	while (str[current] != '\0')
	{
		current++;
	}
	return (current);
}

/*int main()
{
	printf("%d\n", ft_strlen("vou ao zoo\n"));
	printf("%d\n", ft_strlen("123\n"));
}*/
