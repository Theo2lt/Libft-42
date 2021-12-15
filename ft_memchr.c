/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 15:45:12 by tliot             #+#    #+#             */
/*   Updated: 2021/12/12 13:25:55 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*str2;

	str2 = (unsigned char *)str;
	i = 0;
	while (i < n && str2[i] != (unsigned char)c)
		i++;
	if (i == n)
		return (0);
	return ((void *)str2 + i);
}
