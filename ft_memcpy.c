/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:44:19 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/05 15:49:48 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t				i;

	i = 0;
	if (!src && !dst)
		return (dst);
	while (i < n)
	{
		ft_memset(&dst[i], *((char *)(src + i)), 1);
		i++;
	}
	return (dst);
}
