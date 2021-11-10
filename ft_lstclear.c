/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abazizi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 10:29:00 by abazizi           #+#    #+#             */
/*   Updated: 2021/11/10 10:36:51 by abazizi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*to_be_deleted;
	t_list	*next_one;

	to_be_deleted = *lst;
	while (to_be_deleted)
	{
		next_one = to_be_deleted->next;
		ft_lstdelone(to_be_deleted, del);
		to_be_deleted = next_one;
	}
	*lst = NULL;
}
