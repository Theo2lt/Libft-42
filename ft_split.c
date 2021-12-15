/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tliot < tliot@student.42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:28:36 by tliot             #+#    #+#             */
/*   Updated: 2021/12/13 16:28:43 by tliot            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char *ft_strchr(const char *string, int c) : Separateur
// char    *ft_strdup(const char * src)       : Malloc
#include "libft.h"

static int	n_word(char const *s, char c)
{
	int	n_word;
	int	i;

	n_word = 0;
	i = 0;
	if (s[i] && s[0] != c)
		n_word++;
	while (s[i] && s[i + 1])
	{
		if (s[i] == c && s[i + 1] != c)
			n_word++;
		i++;
	}
	if (n_word == 0)
		return (0);
	return (n_word);
}

static char	**ft_free(char **tab)
{
	int	i;

	i = 0;
	while (tab[i])
	{
		free(tab[i]);
		i++;
	}
	free(tab);
	return (NULL);
}

static char	**write_word(char const *s, char sep, char **tab)
{
	int	i;
	int	nbr_lettre;
	int	nbr_word;

	i = -1;
	nbr_lettre = 0;
	nbr_word = 0;
	while (s[++i])
	{
		if (s[i] == sep)
		{
			if (nbr_lettre != 0)
			{
				tab[nbr_word++] = ft_substr(s, i - nbr_lettre, nbr_lettre);
				if (!tab[nbr_word - 1])
					return (ft_free(tab));
			}
			nbr_lettre = 0;
		}
		else
			nbr_lettre++;
	}
	if (nbr_lettre != 0)
		tab[nbr_word] = ft_substr(s, i - nbr_lettre, nbr_lettre);
	return (tab);
}

static char	**ft_null(char const *string, char **tab)
{
	int	i;

	i = 0;
	while (string[i])
		i++;
	if (i == 0)
	{
		tab[0] = malloc(sizeof(char));
		tab[0] = NULL;
		return (tab);
	}
	tab[0] = ft_substr(string, 0, i);
	return (tab);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;

	if (!s)
		return (NULL);
	if (ft_strlen(s) <= 0)
	{
		tab = malloc(sizeof(char) * (1));
		tab[0] = NULL;
		return (tab);
	}
	tab = malloc((n_word(s, c) + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	tab[n_word(s, c)] = NULL;
	if (ft_strchr(s, c))
		return (write_word(s, c, tab));
	else
		return (ft_null(s, tab));
}
/*
int main(int argc, char *argv[])
{
    (void)argc;
    (void)argv;
    char **tab;
    int i;

    tab = ft_split("2" ,' ');
    i = 0;

    if(tab != NULL)
        while(tab[i])
        {
        printf("%s\n",tab[i]);
            i++;
        }
	else
	    printf("tab = '%s'\n" , *tab);
}
*/
