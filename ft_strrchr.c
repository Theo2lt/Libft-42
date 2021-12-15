/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/27 12:25:25 by tliot             #+#    #+#             */
/*   Updated: 2021/12/13 13:24:40 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *string, int c)
{
	char	*ret;
	int		i;

	ret = NULL;
	i = 0;
	while (string[i])
	{
		if (string[i] == (char )c)
			ret = &((char *)string)[i];
		i++;
	}
	if (c == '\0')
		ret = &((char *)string)[i];
	return (ret);
}
