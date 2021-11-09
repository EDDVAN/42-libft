/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:46:22 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/09 08:54:33 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	*r;

	if (ft_isascii(c) < 0)
		return (NULL);
	i = 0;
	r = (char *)s;
	while (r[i])
	{
		if (c == (int)(r[i]))
			return (&r[i]);
		i++;
	}
	if (c == '\0')
		return (&r[i]);
	return (0);
}
