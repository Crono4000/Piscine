/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 15:13:02 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/01 15:13:02 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_letters[16];

void	print_memory_addr(void *addr)
{
	char	characters[16];
	long	rest;
	int		rr;

	rr = 15;
	rest = (long)addr;
	while (rr > 0)
	{
		characters[rr] = g_letters[(rest % 16)];
		rest = (rest - rest % 16) / 16;
		rr--;
	}
	write(1, characters, 16);
	write(1, ":", 1);
}

void	my_putstr(char *str, int size)
{
	int	current;

	current = 0;
	while (current < size)
	{
		if ((str[current] >= 0 && str[current] < 32) || str[current] == 127)
		{
			write(1, ".", 1);
		}
		else
		{
			write(1, str + current, 1);
		}
		current++;
	}
}

void	print_memmory_line(void *memmory, int size)
{
	int				rr;
	unsigned char	c;

	print_memory_addr(memmory);
	rr = 0;
	while (rr < 16)
	{
		if (rr % 2 == 0)
		{
			write(1, " ", 1);
		}
		if (rr < size)
		{
			c = ((unsigned char *) memmory)[rr];
			write(1, g_letters + (c >> 4), 1);
			write(1, g_letters + (((unsigned char)(c << 4)) >> 4), 1);
			rr++;
			continue ;
		}
		write(1, "  ", 2);
		rr++;
	}
	write(1, " ", 1);
	my_putstr(memmory, size);
	write(1, "\n", 1);
}

void	define_letters(void)
{
	g_letters[0] = '0';
	g_letters[1] = '1';
	g_letters[2] = '2';
	g_letters[3] = '3';
	g_letters[4] = '4';
	g_letters[5] = '5';
	g_letters[6] = '6';
	g_letters[7] = '7';
	g_letters[8] = '8';
	g_letters[9] = '9';
	g_letters[10] = 'a';
	g_letters[11] = 'b';
	g_letters[12] = 'c';
	g_letters[13] = 'd';
	g_letters[14] = 'e';
	g_letters[15] = 'f';
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	rr;

	define_letters();
	rr = 0;
	while (rr < size)
	{
		if (size - rr >= 16)
		{
			print_memmory_line(addr + rr, 16);
		}
		else
		{
			print_memmory_line(addr + rr, size - rr);
		}
		rr += 16;
	}
	return (addr);
}

/*int main()
{
	ft_print_memory("yoi soi tu!", 12);
	ft_print_memory("El mario foi al supermercado manjare
una fruta muy\n muy amistosa!", 66);
}*/
