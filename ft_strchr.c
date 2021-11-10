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

char	*ft_strchr(const char *str, int c)
{
	while (*(char *)str)
	{
		if (*(char *)str == (char)c)
			return ((char *) str);
		str++;
	}
	if (c == 0)
	{
		return ((char *)str);
	}
	return (NULL);
}
