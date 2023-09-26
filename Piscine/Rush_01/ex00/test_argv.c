/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_argv.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:50:51 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/17 20:37:08 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "test_argv.h"

int	arg_valid(char *str)
{
	int		i;
	int		size;

	i = 0;
	while (str[i])
	{
		if ((i % 2 == 0) && (str[i] < '0' || str[i] > '9'))
			return (0);
		if ((i % 2 == 1) && (str[i] != ' '))
			return (0);
		i++;
	}
	if (!(i % 2))
		return (0);
	if (((i + 1) / 2) % 4)
		return (0);
	size = (((i + 1) / 2) / 4);
	if (size > 9)
		return (0);
	return (size);
}
