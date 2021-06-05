/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:52:53 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 13:53:10 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*curr;

	if (lst && del)
	{
		while (*lst)
		{
			curr = (*lst)->next;
			(*del)((*lst)->content);
			free (*lst);
			*lst = curr;
		}
	}
}
