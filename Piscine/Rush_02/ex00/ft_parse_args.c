/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:07:23 by vfresnai          #+#    #+#             */
/*   Updated: 2023/09/24 22:15:17 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_convert_arg(char *str)
{
	int	i;
	int	j;

	i = 0;
	if (ft_strlen(str) >= 2 && str[0] == '-')
	{
		while (str[++i] == '0')
			;
		if (str[i] == 0)
			return (&str[i - 1]);
		else
			return (NULL);
	}	
	i = -1;
	while (str[++i])
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (NULL);
	j = 0;
	while (str[j] && i > 1 && str[j] == '0')
	{
		str++;
		j++;
	}
	return (str);
}

int	ft_parse_args(t_prog *rush, int argc, char **argv)
{
	if (argc < 2 || argc > 3)
		return (-1);
	if (argc == 2)
	{
		rush->dict_name = "numbers.dict";
		rush->value = ft_convert_arg(argv[1]);
	}
	else
	{
		rush->dict_name = argv[1];
		rush->value = ft_convert_arg(argv[2]);
	}
	if (rush->value == 0 || ft_strlen(rush->value) >= 40)
	{
		ft_putstr("Error\n");
		return (-1);
	}
	return (0);
}
