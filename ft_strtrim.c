/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 16:30:46 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/09 10:25:59 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_scmp(char c, char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int	ft_startskip(char const *s1, char const *set, int i)
{
	while (s1[i])
	{
		if (ft_scmp(s1[i], set))
			break ;
		i++;
	}
	return (i);
}

int	ft_endskip(char const *s1, char const *set, int i, int j)
{
	while (j > i)
	{
		if (ft_scmp(s1[j], set))
			break ;
		j--;
	}
	j++;
	return (j);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		j;
	int		k;
	char	*s2;

	if (!s1 || !set)
		return (NULL);
	i = 0;
	j = ft_strlen(s1) - 1;
	i = ft_startskip(s1, set, i);
	j = ft_endskip(s1, set, i, j);
	k = 0;
	s2 = (char *) malloc((j - i + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	while (i < j)
	{
		s2[k] = s1[i];
		k++;
		i++;
	}
	s2[k] = '\0';
	return (s2);
}
