/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 14:55:23 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/09 08:31:39 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		c;
	int		size;
	char	*str;

	if (!s1 || !s2)
		return (NULL);
	size = ft_strlen(s1) + ft_strlen(s2);
	i = 0;
	c = 0;
	str = (char *) malloc(size * sizeof(char));
	if (!str)
		return (NULL);
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
		i++;
		c++;
	}
	return (str);
}
