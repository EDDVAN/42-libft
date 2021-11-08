/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 17:47:21 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/08 15:32:51 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_sizenbr(long nbr)
{
    int i;
    
    i = 1;
    if(nbr < 0)
    {
        nbr *= -1;
        i++;
    }
    while (nbr > 9)
    {
        nbr = nbr / 10;
        i++;
    }
    return i;
}

void    ft_switch(long nbr, int size, char *str)
{
    while (size > 0)
    {
        str[size-1] = nbr % 10 + '0';
        nbr = nbr / 10;
        size--;
    }
}

char *ft_itoa(int n)
{
    int i;
    int size;
    char *str;
    long nbr;

    i = 0;
    nbr = n;
    size = ft_sizenbr(nbr);
    if (nbr < 0)
        nbr *= -1;
    str = (char *) malloc (size + 1 * sizeof(char));
	if (!str)
		return (NULL);
    str[size] = '\0';
    ft_switch(nbr, size, str);
    if(n < 0)
        str[0] = '-';
    return str;
}

