/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:23:36 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 12:24:11 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	car;
	unsigned char	*cpy;

	i = 0;
	car = (unsigned char)c;
	cpy = (unsigned char *)s;
	while (i < n)
	{
		if (car == cpy[i])
		{
			return (cpy + i);
		}
		i++;
	}
	return (0);
}
