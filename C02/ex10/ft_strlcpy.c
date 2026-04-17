/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:38:34 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/31 22:38:34 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	rr;

	rr = 0;
	while (src[rr] != '\0')
	{
		if (rr < size - 1)
			dest[rr] = src[rr];
		if (rr == size - 1)
			dest[rr] = '\0';
		rr++;
	}
	if (rr < size)
		dest[rr] = '\0';
	return (rr);
}

/*#include <stdio.h>
#include <unistd.h>

void hprint(char *text, int n)
{
	int rr = 0;
	while (rr < n)
	{
		if (text[rr] == '\0')
		{
			write(1, "\\0", 2);
		} else {
			write(1, text + rr, 1);
		}
		rr++;
	}
	write(1, "\n", 1);
}

void print_string_as_numbers_numbers(char *text, int n)
{
	int rr = 0;
	while (rr < n)
	{
		printf("%d\n", text[rr]);
		rr++;
	}
}

int main()
{
	char origem[] = "Olá";
    char destino[20] = "facada maluca";
	char destine[10];
	int size;

	size = ft_strlcpy(destino, origem, 14);
	printf("%d\n", size);
	hprint(destine, 10);

    size = ft_strlcpy(destino, destino, 10);
	printf("%d\n", size);
	hprint(origem, 5);

    return 0;
}*/