/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:54:02 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/09 11:17:00 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*buff;
	size_t	l;

	if (!s)
		return (NULL);
	l = ft_strlen(s);
	buff = (char *)ft_calloc(len + 1, sizeof(char));
	if (!buff)
		return (NULL);
	if (start >= l)
		return (buff);
	ft_memcpy (buff, &s[start], len);
	return (buff);
}
