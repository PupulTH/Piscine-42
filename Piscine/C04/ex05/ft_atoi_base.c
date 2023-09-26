/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/14 18:26:42 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/26 10:46:32 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	ft_mult_nbr(char str, char *base, int mult, int nbr)
{
	int		i;

	i = 0;
	while (base[i] != '\0')
	{
		if (str == base[i])
			return (nbr + (mult * i));
		i++;
	}
	return (nbr);
}

int	ft_is_base(char str, char *base)
{
	int		i;

	i = 0;
	if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1]
		|| (base[i] < 33) || base[i] >= 127)
		return (1);
	while (base[i] != '\0')
	{
		if (base[i] == str)
			return (2);
		i++;
	}
	return (0);
}

int	ft_atoi_simpl(char *str, char *base, int size, int start)
{
	int		i;
	int		sign;
	int		result;
	int		mult;

	i = start - 1;
	sign = 1;
	result = 0;
	mult = 1;
	while (i >= 0)
	{
		if (str[i] == '-')
			sign *= (-1);
		if (ft_is_base(str[i], base) == 2)
		{
			result = ft_mult_nbr(str[i], base, mult, result);
			mult *= size;
		}
		i--;
	}
	return (result * sign);
}

int	verif_base(char *base)
{
	int	i;

	i = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[i] == '-' || base[i] == base[i + 1]
			|| (base[i] < 33) || base[i] >= 127)
			return (0);
		i++;
	}
	if (i <= 1)
		return (0);
	return (1);
}

int	ft_atoi_base(char *str, char *base)
{
	int		size;
	int		i;

	size = 0;
	i = 0;

	if (verif_base(base) == 0)
		return (0);
	while (base[size] != '\0')
		size++;
	while (((str[i] >= '\t') && (str[i] <= '\r')) || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
		i++;
	while (ft_is_base(str[i], base) == 2)
		i++;
	return (ft_atoi_simpl(str, base, size, i));
}
