/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:54:05 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 13:55:08 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_freelst(t_list *lst, void (*del)(void *))
{
	t_list	*tmp;

	while (lst)
	{
		tmp = lst;
		lst = lst->next;
		if (tmp->content)
			del(tmp->content);
		free (tmp);
	}
	return (0);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*first;

	if (lst == 0 || f == 0)
		return (0);
	new = (t_list *)malloc(sizeof(t_list));
	if (new == 0)
		return (0);
	new->content = (*f)(lst->content);
	new->next = 0;
	first = new;
	lst = lst->next;
	while (lst)
	{
		first->next = (t_list *)malloc(sizeof(t_list));
		if (first->next == 0)
			return (ft_freelst(new, del));
		first->next->content = (*f)(lst->content);
		first->next->next = 0;
		first = first->next;
		lst = lst->next;
	}
	return (new);
}
