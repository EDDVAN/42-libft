/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:53:12 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/09 14:50:00 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*str;

	str = NULL;
	while (*(char *) s)
	{
		if ((char)*s == (char) c)
			str = (char *)s;
		s++;
	}
	if (c == 0)
		return ((char *)s);
	return (str);
}
