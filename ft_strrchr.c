/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:53:12 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/05 15:59:20 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t		i;
	char		*r;
	const char	*n;

	i = ft_strlen(s);
	r = (char *)s;
	n = &s[i];
	if (c == '\0')
		return ((char *)n);
	while (i--)
	{
		if (c == (r[i]))
			return (&r[i]);
	}
	return (0);
}
