/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:45:37 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/05 15:51:39 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_wordcount(char const *s, char c)
{
	int	i;
	int	res;
	int b;

	i = 0;
	res = 0;
	b = 1;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			res++;
			b = 0;
		}
		i++;
	}
	return (res + b);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int     j;
	int     k;
	int     size;
	char	**splited;

	i = 0;
	k = 0;
	size = ft_wordcount(s,c);
	splited = (char **)malloc(size);
	while (i <= size)
	{
	    j = 0;
	    splited[i] = (char *) malloc(500 * sizeof(char));
	    while (s[k] != c)
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
