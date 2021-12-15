/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 18:41:16 by tliot             #+#    #+#             */
/*   Updated: 2021/12/14 16:11:29 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nouvelle_list;
	t_list	*nouveau_elemement;
	t_list	*tmp;

	if (!lst)
		return (NULL);
	nouvelle_list = ft_lstnew(f(lst->content));
	tmp = lst->next;
	while (tmp)
	{
		nouveau_elemement = ft_lstnew(f(tmp->content));
		if (!nouveau_elemement)
		{
			ft_lstclear(&nouvelle_list, del);
			return (NULL);
		}
		ft_lstadd_back(&nouvelle_list, nouveau_elemement);
		tmp = tmp->next;
	}
	return (nouvelle_list);
}
