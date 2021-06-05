/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 11:28:12 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 11:59:11 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*destm;
	unsigned char	*srcm;
	unsigned char	end;

	destm = (unsigned char *)dest;
	srcm = (unsigned char *)src;
	i = 0;
	end = (unsigned char)c;
	while (i < n)
	{
		destm[i] = srcm[i];
		if (srcm[i] == end)
		{
			return (dest + i + 1);
		}
		i++;
	}
	return (0);
}
