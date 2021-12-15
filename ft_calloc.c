/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/29 15:39:39 by tliot             #+#    #+#             */
/*   Updated: 2021/12/10 16:18:54 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t elementCount, size_t elementSize)
{
	void	*tab;

	tab = malloc(elementCount * elementSize);
	if (tab == NULL)
		return (NULL);
	ft_bzero(tab, elementSize * elementCount);
	return (tab);
}
