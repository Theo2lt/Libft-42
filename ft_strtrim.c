/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 14:24:23 by tliot             #+#    #+#             */
/*   Updated: 2021/12/10 17:36:00 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*res;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	while (*s1 && ft_strchr(set, *s1))
		s1++;
	end = ft_strlen(s1);
	while (end && ft_strchr(set, s1[end]))
		end--;
	res = ft_substr((char *)s1, 0, end + 1);
	return (res);
}

/*
int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    //printf(" RES : %s",ft_strtrim(argv[1],argv[2]));
    char *s1 = "  \t \t \n   \n\n\n\t";
    //char *s2 = "";
    char *res = ft_strtrim(s1, " \n\t");
    printf("%s",res);
    return 0;   
}
*/