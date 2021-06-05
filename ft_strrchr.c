/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:56:10 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 13:56:34 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	car;
	char	*cpy;

	i = 0;
	while (s[i])
		i++;
	car = (char)c;
	cpy = (char *)s;
	while (i >= 0)
	{
		if (cpy[i] == car)
			return (cpy + i);
		i--;
	}
	return (0);
}
