/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:36:23 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 12:36:57 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	size_t			src_len;

	if (dest == 0 || src == 0)
		return (0);
	src_len = ft_strlen(src);
	if (size <= 0)
		return (src_len);
	i = 0;
	while (src[i] && (size - 1) > 0)
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	dest[i] = '\0';
	return (src_len);
}
