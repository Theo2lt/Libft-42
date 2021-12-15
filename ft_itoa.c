/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 15:22:34 by tliot             #+#    #+#             */
/*   Updated: 2021/12/12 13:25:40 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len_int(int n)
{
	int	len;

	len = 0;
	if (n <= 0)
		len++;
	while (n != 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char		*tab;
	int			len;
	long int	nombre;

	nombre = (long int)n;
	len = ft_len_int(n);
	tab = malloc(sizeof(char) * (len + 1));
	if (tab == NULL)
		return (NULL);
	tab[len--] = '\0';
	if (nombre == 0)
		tab[0] = '0';
	if (nombre < 0)
	{
		nombre *= -1;
		tab[0] = '-';
	}
	while (nombre > 0)
	{
		tab[len--] = 48 + (nombre % 10);
		nombre = nombre / 10;
	}
	return (tab);
}
/*
int main(int argc, char *argv[])
{
    (void)argc;
    printf("%s", ft_itoa(ft_atoi(argv[1])));
}
*/