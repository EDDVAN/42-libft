/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 10:56:28 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/09 10:56:34 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	clear(char **arr)
{
	size_t	i;

	i = 0;
	while (arr[i])
		free(arr[i++]);
	free(arr);
}

static int	ft_wordcount(char const *s, char c)
{
	int	res;
	int	i;

	res = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue ;
		}
		res++;
		while (s[i] != c && s[i])
			i++;
	}
	return (res);
}

static char	**ft_transfer(char **spl, char const *str, char c)
{
	int	index;
	int	i;
	int	j;

	index = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			i++;
			continue ;
		}
		j = i;
		while (str[i] != c && str[i])
			i++;
		spl[index] = malloc(i - j + 1);
		if (!spl[index])
			return (NULL);
		ft_strlcpy(spl[index++], str + j, i - j + 1);
	}
	spl[index] = NULL;
	return (spl);
}

char	**ft_split(char const *s, char c)
{
	char	**splited;
	int		size;

	if (!s)
		return (NULL);
	size = ft_wordcount(s, c);
	splited = malloc((size + 1) * sizeof(char *));
	if (!splited)
		return (NULL);
	if (!ft_transfer(splited, s, c))
	{
		clear(splited);
		return (NULL);
	}
	return (splited);
}
