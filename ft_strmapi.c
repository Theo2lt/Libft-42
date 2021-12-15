/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/04 17:36:52 by tliot             #+#    #+#             */
/*   Updated: 2021/12/10 17:30:54 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*tab;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	tab = malloc(sizeof(char) * (i + 1));
	if (!tab)
		return (0);
	tab[i] = 0;
	i = 0;
	while (s[i])
	{
		tab[i] = (*f)(i, s[i]);
		i++;
	}
	return (tab);
}

/*
int main()
{

    printf("ADD test : %p \n" , &test);
    printf("tab : %s" ,ft_strmapi("HELIIIPO", &test));
}
*/