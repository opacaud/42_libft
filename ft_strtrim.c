/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:10:33 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/21 10:02:21 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isset(char c, char const *set)
{
	unsigned int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

unsigned int	ft_get_size(char const *s1, char const *set)
{
	unsigned int	start;
	unsigned int	end;
	unsigned int	size;

	start = 0;
	if (s1[start] == 0)
		return (0);
	end = ft_strlen(s1) - 1;
	while (ft_isset(s1[start], set) && start < ft_strlen(s1))
		start++;
	while (ft_isset(s1[end], set) && end >= 1)
		end--;
	size = end - start + 1;
	if (end < start)
		size = 0;
	return (size);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char			*res;
	unsigned int	i;
	unsigned int	j;
	unsigned int	size;

	i = 0;
	if (s1 == 0 || set == 0)
		return (0);
	size = ft_get_size(s1, set);
	res = (char *)malloc(sizeof(char) * (size + 1));
	if (res == 0)
		return (0);
	while (ft_isset(s1[i], set))
		i++;
	j = 0;
	while (j < size)
	{
		res[j] = s1[i];
		j++;
		i++;
	}
	res[j] = '\0';
	return (res);
}
