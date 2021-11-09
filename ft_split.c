/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:45:37 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/09 08:39:14 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	res;

	i = 0;
	res = 0;
	if (s[0] == c)
	    res--;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c)
		{
			res++;
		}
		i++;
	}
	if (s[i - 1] != c)
	    res++;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int     j;
	int     k;
	int     size;
	char	**splited;

	if (!s)
		return (NULL);
    i = 0;
    size = ft_wordcount(s,c);
    k = 0;
    while (s[k] == c)
        k++;
    splited = (char **) malloc(size * sizeof(char *));
    if (!splited)
        return NULL;
    while (i < size)
    {
        j = 0;
        splited[i] = (char *) malloc(500 * sizeof(char));
		if (!splited[i])
			return NULL;
        while (s[k] != '\0' && s[k] != c)
        {
            splited[i][j] = s[k];
            j++;
            k++;
        }
        splited[i][j] = '\0';
        while (s[k] == c)
            k++;
        i++;
    }
	return splited;
}
