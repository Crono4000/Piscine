/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:50:04 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/31 20:50:04 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdio.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	rr;

	rr = 0;
	while (rr < n && src[rr] != '\0')
	{
		dest[rr] = src[rr];
		rr++;
	}
	while (rr < n)
	{
		dest[rr] = '\0';
		rr++;
	}
	return (dest);
}

/*void hprint(char *text, int n)
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

int main() {
    char origem[] = "Olá";
    char destino[20] = "facada maluca";

    ft_strncpy(destino, origem, 2);

    hprint(destino, 10);
	//print_string_as_numbers_numbers(destino, 5);
    return 0;
} */