/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/05 15:45:15 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/05 15:45:18 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	long long int		i;
	unsigned char		*r;

	i = 0;
	r = (unsigned char *)b;
	while (i < (long long int)len)
	{
		r[i] = (unsigned char) c;
		i++;
	}
	return (b);
}
