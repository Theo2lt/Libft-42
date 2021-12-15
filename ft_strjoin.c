/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 20:06:55 by tliot             #+#    #+#             */
/*   Updated: 2021/12/13 13:55:12 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		len;
	char	*str;
	int		i;
	int		y;

	if (!s1 || !s2)
		return (NULL);
	len = ft_strlen(s1) + ft_strlen(s2);
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (0);
	i = 0;
	y = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[y])
	{
		str[i + y] = s2[y];
		y++;
	}
	str[y + i] = '\0';
	return (str);
}

/*
int main(int argc, char *argv[])
{
    (void)argc;
    //ft_strjoin((const char *)argv[1], (const char * )argv[2]); 
    (void)argv;
    char *s1 = "where is my ";
    char *s2 = "malloc ???";
    char *s3 = "where is my malloc ???";
    char *res = ft_strjoin(s1, s2);

    printf("Dans Main \n");
    printf("s3 : %s\n" , s3);
    printf("res : %s\n" , res);
}

*/