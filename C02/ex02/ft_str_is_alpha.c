/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 21:40:27 by afranco-          #+#    #+#             */
/*   Updated: 2026/01/31 21:40:27 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	rr;

	rr = 0;
	while (str[rr] != '\0')
	{
		if ((str[rr] < 65 || str[rr] > 90) && (str[rr] < 97 || str[rr] > 122))
		{
			return (0);
		}
		rr++;
	}
	return (1);
}

/*int main() {
    char str1[] = "hello";
    char str2[] = "Hello";
    char str3[] = "123abc";
    char str4[] = "hello world!";
    char str5[] = "";

    printf("Resultado para \"%s\": %d\n", str1, ft_str_is_lowercase(str1));
    printf("Resultado para \"%s\": %d\n", str2, ft_str_is_lowercase(str2));
    printf("Resultado para \"%s\": %d\n", str3, ft_str_is_lowercase(str3));
    printf("Resultado para \"%s\": %d\n", str4, ft_str_is_lowercase(str4));
    printf("Resultado para \"%s\": %d\n", str5, ft_str_is_lowercase(str5));

    return 0;
}*/
