/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 11:08:47 by vfresnai          #+#    #+#             */
/*   Updated: 2023/09/24 18:44:33 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_find_char(char *str, char *charset)
{
	while (*charset)
		if (*str == *charset++)
			return (1);
	return (0);
}

int	ft_wordlen(char *str, char *charset)
{
	int	i;

	i = 0;
	while (str[i] && !ft_find_char(str + i, charset))
		i++;
	return (i);
}

int	ft_wordcount(char *str, char *charset)
{
	int		i;
	int		count;

	count = 0;
	while (*str)
	{
		while (*str && ft_find_char(str, charset))
			str++;
		i = ft_wordlen(str, charset);
		str += i;
		if (i)
			count++;
	}
	return (count);
}

char	*ft_wordcpy(char *src, int n)
{
	char	*dest;

	dest = malloc((n + 1) * sizeof(char));
	if (!dest)
		return (NULL);
	dest[n] = 0;
	while (n--)
		dest[n] = src[n];
	return (dest);
}

char	**ft_split(char *str, char *charset)
{
	char	**tab;
	int		size;
	int		i;
	int		n;

	size = ft_wordcount(str, charset);
	tab = malloc((size + 1) * sizeof(char *));
	if (!tab)
		return (NULL);
	i = -1;
	while (++i < size)
	{
		while (*str && ft_find_char(str, charset))
			str++;
		n = ft_wordlen(str, charset);
		tab[i] = ft_wordcpy(str, n);
		if (!(tab[i]))
			return (NULL);
		str += n;
	}
	tab[size] = 0;
	return (tab);
}
