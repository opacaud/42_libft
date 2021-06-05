/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 12:35:43 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 12:36:06 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	i;
	unsigned char	*car_spe1;
	unsigned char	*car_spe2;

	i = 0;
	car_spe1 = (unsigned char *)s1;
	car_spe2 = (unsigned char *)s2;
	while (i < n && s1[i] && s2[i] && (s1[i] == s2[i]))
		i++;
	if (i == n)
		return (0);
	return (car_spe1[i] - car_spe2[i]);
}
