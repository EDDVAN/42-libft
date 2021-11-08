/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:47:17 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/05 15:47:30 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	dest_size;
	unsigned int	src_size;
	unsigned int	j;

	dest_size = ft_strlen(dest);
	src_size = ft_strlen(src);
	j = 0;
	if (size < dest_size)
		return (size + src_size);
	size -= dest_size;
	if (size != 0)
	{
		while (src[j] != '\0' && size - 1 != 0)
		{
			dest[dest_size + j] = src[j];
			j++;
			size--;
		}
		dest[dest_size + j] = '\0';
	}
	return (dest_size + src_size);
}
