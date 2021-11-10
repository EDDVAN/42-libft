/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:54:02 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/09 14:48:09 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	size_t	l;
	size_t	x;

	if (!s)
		return (NULL);
	x = ft_strlen(s + start);
	l = ft_strlen(s);
	if (x < len)
		len = x;
	buff = (char *)ft_calloc(len + 1, sizeof(char));
	if (!buff)
		return (NULL);
	if (start >= l)
		return (buff);
	ft_memcpy (buff, &s[start], len);
	return (buff);
}
