/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 20:50:23 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/31 20:50:23 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	rr;

	rr = 0;
	while (src[rr] != '\0')
	{
		dest[rr] = src[rr];
		rr++;
	}
	dest[rr] = '\0';
	return (dest);
}

/*int main() {
    char origem[] = "Olá mundo";
    char destino[20];

    ft_strcpy(destino, origem);

    printf("%s\n", destino);  // Olá mundo
    return 0;
}*/
