/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:55:23 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/09 11:52:24 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_fill_new(char const *s1, char const *s2, char *str)
{
	int	i;
	int	c;

	i = 0;
	c = 0;
	while (s1[i])
	{
		str[c] = s1[i];
		i++;
		c++;
	}
	i = 0;
	while (s2[i])
	{
		str[c] = s2[i];
		c++;
		i++;
	}
	str[c] = '\0';
	return (str);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		size;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	str = (char *) malloc((size + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str = ft_fill_new(s1, s2, str);
	return (str);
}
