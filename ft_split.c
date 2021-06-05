/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opacaud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/05/20 13:12:59 by opacaud           #+#    #+#             */
/*   Updated: 2021/05/20 13:43:27 by opacaud          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lines(char const *str, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] != '\0' && str[i] == c)
			i++;
		if (str[i] != '\0' && str[i] != c)
			count++;
		while (str[i] != '\0' && str[i] != c)
			i++;
	}
	return (count);
}

int	ft_str_s(char const *str, char c, int j)
{
	int	str_size;

	str_size = 0;
	while (str[j] != '\0' && (str[j] != c))
	{
		str_size++;
		j++;
	}
	return (str_size);
}

int	ft_go_ahead(char const *s, int j, char c)
{
	while (s[j] != '\0' && s[j] == c)
		j++;
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**tab;
	int		i;
	int		j;
	int		k;

	if (s == 0)
		return (0);
	tab = (char **)malloc(sizeof(char *) * (ft_lines(s, c) + 1));
	if (tab == 0)
		return (0);
	i = -1;
	j = 0;
	while (++i < ft_lines(s, c))
	{
		j = ft_go_ahead(s, j, c);
		tab[i] = malloc(sizeof(char) * (ft_str_s(s, c, j) + 1));
		if (tab[i] == 0)
			return (0);
		k = 0;
		while (s[j] != '\0' && s[j] != c)
			tab[i][k++] = s[j++];
		tab[i][k] = '\0';
	}
	tab[i] = 0;
	return (tab);
}
