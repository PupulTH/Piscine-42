/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:04:28 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/24 21:58:02 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_remove_zero(char *str, int *digit)
{
	while (*str && *str == '0' && *digit > 1)
	{
		str++;
		(*digit)--;
	}
	return (str);
}

//Atoi like function, but return a pointer to a string to a positive number
char	*ft_get_number(char *str)
{
	int			sign;
	long long	nbr;
	int			i;

	while ((*str) == 32)
		str++;
	sign = 1;
	if (*str == '-' || *str == '+')
		if (*str++ == '-')
			sign = -sign;
	nbr = 0;
	i = 0;
	while (str[i] >= '0' && str[i] <= '9')
		i++;
	if (i == 0)
		str[i++] = '0';
	str[i] = 0;
	if (i > 1)
		str = ft_remove_zero(str, &i);
	if (sign < 0 && str[0] != '0')
		return (NULL);
	return (str);
}

char	*ft_get_word(char *str)
{
	int		i;

	i = 0;
	while (*str == ' ')
		str++;
	while (str[i] >= 32 && str[i] <= 126)
		i++;
	if (i == 0)
		return (NULL);
	str[i] = 0;
	return (str);
}

int	ft_parse_line(t_prog *rush, char *str1)
{
	char	*str2;

	str2 = str1;
	while (*str2 != ':' && *str2)
		str2++;
	if (!(*str2))
		return (-1);
	str2++;
	str1 = ft_get_number(str1);
	str2 = ft_get_word(str2);
	if (!str1 || !str2)
		return (-1);
	if (ft_push_dict_entry(&(rush->entries_list), str2, str1) < 0)
		return (-1);
	return (0);
}
