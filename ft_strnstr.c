/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:37:49 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 12:38:10 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	if (s2[i] == 0)
		return ((char *)s1);
	while (i < len && s1[i])
	{
		j = 0;
		while (s1[i + j] == s2[j] && s2[j] && i + j < len)
			j++;
		if (s2[j] == 0)
			return ((char *)s1 + i);
		i++;
	}
	return (0);
}
