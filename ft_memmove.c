/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:21:51 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 12:22:57 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*destm;
	unsigned char	*srcm;
	int				i;
	int				len;

	if (dest == 0 && src == 0)
		return (0);
	destm = (unsigned char *)dest;
	srcm = (unsigned char *)src;
	len = ((int)n) - 1;
	if (srcm < destm)
	{
		while (len >= 0)
		{
			destm[len] = srcm[len];
			len--;
		}
	}
	else
	{
		i = -1;
		while (++i <= len)
			destm[i] = srcm[i];
	}
	return (dest);
}
