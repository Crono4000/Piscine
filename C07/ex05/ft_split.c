/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afranco- <afranco-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 15:49:10 by afranco-          #+#    #+#             */
/*   Updated: 2026/02/15 18:31:41 by afranco-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	count_strstr(char *str, char *to_find)
{
	int	yy;
	int	tt;
	int	count;

	count = 1;
	yy = 0;
	tt = 0;
	while (str[yy])
	{
		if (str[yy] == to_find[tt])
		{
			tt++;
			if (!to_find[tt])
			{
				tt = 0;
				count++;
			}
		}
		else
			tt = 0;
		yy++;
	}
	return (count);
}

void	cpy_str_to(char *str, char **dest, int p1, int p2)
{
	int	jj;

	jj = 0;
	*dest = (char *) malloc(sizeof(char) * (p2 - p1 + 1));
	while (p1 + jj < p2)
	{
		dest[0][jj] = str[p1 + jj];
		jj++;
	}
	dest[0][jj] = '\0';
}

int	*calloc_int(int size)
{
	int	*result;
	int	tt;

	result = (int *) malloc(size * sizeof(int));
	tt = 0;
	while (tt < size)
		result[tt++] = 0;
	return (result);
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	int		*ar;

	ar = calloc_int(4);
	result = (char **) malloc(count_strstr(str, charset) * sizeof(char *));
	while (str[ar[1]])
	{
		if (str[ar[1]] == charset[ar[2]])
		{
			ar[2]++;
			if (!charset[ar[2]])
			{
				cpy_str_to(str, result + ar[3], ar[0], ar[1] - ar[2] + 1);
				ar[0] = ar[1] + 1;
				ar[3]++;
			}
		}
		else
			ar[2] = 0;
		ar[1]++;
	}
	cpy_str_to(str, result + ar[3], ar[0], ar[1]);
	return (result);
}

/*#include <stdio.h>

void print_int_arrays(char **array, int size)
{
    int yy;

    yy = 0;
    while (yy < size)
    {
        printf("part:%s\n", array[yy]);
        yy++;
    }
}

int main()
{
	print_int_arrays(ft_split("macaco lol francelolsinha", "lol"), 3);
}*/
