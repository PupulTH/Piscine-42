/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 17:37:29 by doferet           #+#    #+#             */
/*   Updated: 2023/09/24 21:47:51 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	print_tence_digit(t_prog *rush, char *str, int n, int i)
{
	char	str2[2];

	str2[0] = str[i];
	str2[1] = 0;
	espace_or_no(rush);
	ft_putstr(ft_fetch_value(rush->entries_list, str2));
	if (n >= 1)
	{
		espace_or_no(rush);
		ft_putstr(ft_fetch_value(rush->entries_list, big(rush, n)));
	}
}

void	print_hund_digit(t_prog *rush, char *str, int i, int n)
{
	char	digit[2];

	digit[0] = str[i];
	digit[1] = 0;
	espace_or_no(rush);
	ft_putstr(ft_fetch_value(rush->entries_list, digit));
	espace_or_no(rush);
	ft_putstr(ft_fetch_value(rush->entries_list, "100"));
	if (str[i + 1] == '0' && str[i + 2] == '0' && n >= 1)
	{
		espace_or_no(rush);
		ft_putstr(ft_fetch_value(rush->entries_list, big(rush, n)));
	}
}

void	print_dez_digit_1(t_prog *rush, char *str, int n, int i)
{
	char	str2[3];

	i++;
	str2[0] = '1';
	str2[1] = str[i];
	str2[2] = 0;
	espace_or_no(rush);
	ft_putstr(ft_fetch_value(rush->entries_list, str2));
	str2[0] = 0;
	str2[1] = 0;
	if (n >= 1)
	{
		espace_or_no(rush);
		ft_putstr(ft_fetch_value(rush->entries_list, big(rush, n)));
	}
}

void	print_dez_digit_2(t_prog *rush, char *str, int n, int i)
{
	char	str2[3];

	str2[0] = str[i];
	str2[1] = '0';
	str2[2] = 0;
	espace_or_no(rush);
	ft_putstr(ft_fetch_value(rush->entries_list, str2));
	str2[0] = 0;
	str2[1] = 0;
	i++;
	if (n >= 1 && str[i] == '0')
	{
		espace_or_no(rush);
		ft_putstr(ft_fetch_value(rush->entries_list, big(rush, n)));
	}
}

void	print_dez_digit(t_prog *rush, char *str, int n, int i)
{
	if (str[i] == '1')
	{
		print_dez_digit_1(rush, str, n, i);
		return ;
	}
	else
		print_dez_digit_2(rush, str, n, i);
}
