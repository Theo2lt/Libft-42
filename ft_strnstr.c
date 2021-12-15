/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 17:24:54 by tliot             #+#    #+#             */
/*   Updated: 2021/12/10 17:33:43 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	long unsigned int	i;
	long unsigned int	y;
	long unsigned int	littlelen;

	littlelen = ft_strlen(little);
	i = 0;
	if (!*little)
		return ((char *)big);
	while (big[i] && i < len)
	{
		y = 0;
		while (big[i + y] && big[i + y] == little[y] && i + y < len)
			y++;
		if (y == littlelen)
			return ((char *)&big[i]);
		i++;
	}
	return (0);
}
