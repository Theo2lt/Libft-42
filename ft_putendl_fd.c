/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:08:52 by tliot             #+#    #+#             */
/*   Updated: 2021/12/10 16:56:25 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	if (s)
	{
		i = -1;
		while (s[++i])
		{
			ft_putchar_fd(s[i], fd);
		}
		ft_putchar_fd('\n', fd);
	}
}