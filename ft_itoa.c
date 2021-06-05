/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:43:41 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 13:45:45 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

unsigned int	ft_get_length(int nb)
{
	unsigned int	i;
	unsigned int	nb_unsigned;

	i = 0;
	if (nb == 0)
		return (1);
	if (nb < 0)
	{
		i = 1;
		nb_unsigned = (unsigned int)(-nb);
	}
	else
	{
		nb_unsigned = (unsigned int)nb;
	}
	while (nb_unsigned > 0)
	{
		i++;
		nb_unsigned /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	unsigned int	size;
	char			*res;
	unsigned int	unsigned_n;

	size = ft_get_length(n);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (res == 0)
		return (0);
	if (n == 0)
		res[0] = '0';
	if (n < 0)
	{
		unsigned_n = (unsigned int) - n;
		res[0] = '-';
	}
	else
		unsigned_n = (unsigned int)n;
	res[size] = 0;
	while (unsigned_n > 0)
	{
		res[--size] = unsigned_n % 10 + '0';
		unsigned_n /= 10;
	}
	return (res);
}
