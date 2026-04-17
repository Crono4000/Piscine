/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 22:55:22 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/31 22:55:22 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	g_letters[16];

void	print_hexadecimal(unsigned char cha)
{
	write(1, "\\", 1);
	write(1, g_letters + (cha >> 4), 1);
	write(1, g_letters + (((unsigned char)(cha << 4)) >> 4), 1);
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

void	ft_putstr_non_printable(char *str)
{
	int	rr;

	define_letters();
	rr = 0;
	while (str[rr] != '\0')
	{
		if ((str[rr] >= 0 && str[rr] < 32) || str[rr] == 127)
		{
			print_hexadecimal(str[rr]);
		}
		else
		{
			write(1, str + rr, 1);
		}
		rr++;
	}
}

/*int main()
{
	ft_putstr_non_printable("Ola\nesta bem?");
	ft_putstr_non_printable("Aqui esta: \xE, \x1A, \x12");
}*/
