/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:52:36 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/05 15:52:39 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	l;

	i = 0;
	l = ft_strlen(needle);
	if (!needle[i])
		return ((char *)haystack);
	while (i < len && haystack[i])
	{
		j = 0;
		if (needle[j] == haystack[i])
		{
			while (j < l && i + j < len && haystack[i + j])
			{
				if (needle[j] != haystack[i + j])
					break ;
				j++;
			}
			if (!needle[j])
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (0);
}
