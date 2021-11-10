/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 13:51:59 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/10 14:00:12 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*to_be_modified;
	t_list	*next_one;

	to_be_modified = lst;
	if (!f)
		return;
	while (to_be_modified)
	{
		next_one = to_be_modified->next;
		f(to_be_modified->content);
		to_be_modified = next_one;
	}
}
