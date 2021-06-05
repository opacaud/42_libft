/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:34:38 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 12:35:21 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int		i;
	char	car;
	char	*cpy;

	i = 0;
	car = (char)c;
	cpy = (char *)s;
	while (cpy[i])
	{
		if (cpy[i] == car)
			return (cpy + i);
		i++;
	}
	if (cpy[i] == car)
		return (cpy + i);
	return (0);
}
