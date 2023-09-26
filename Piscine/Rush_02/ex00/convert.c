/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 14:14:08 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/24 21:47:36 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	get_len_nb(t_prog *rush)
{
	int		i;
	int		nb_iteration_ness;

	rush->big = malloc(sizeof(char) * (ft_strlen(rush->value) + 1));
	if (!(rush->big))
		return (-1);
	rush->space_flag = 0;
	i = 0;
	while ((rush->value)[i] != 0)
		i++;
	nb_iteration_ness = ((i - 1) / 3);
	what_to_print(rush, nb_iteration_ness, i);
	ft_putchar('\n');
	free(rush->big);
	return (0);
}

void	what_to_print(t_prog *rush, int n, int size)
{
	char		str_current[3];
	int			i;

	str_current[0] = 0;
	str_current[1] = 0;
	str_current[2] = 0;
	i = 0;
	while (i <= size)
	{
		if ((size - i) >= ((3 * n) - 2))
		{
			str_current[2 - (((size - i) - 1) % 3)] = (rush->value)[i];
			i++;
		}
		if ((i == size) || ((size - i) == ((3 * n))))
		{
			print_three_digit(rush, str_current, n);
			str_current[0] = 0;
			str_current[1] = 0;
			str_current[2] = 0;
			n--;
		}
	}
}

void	print_three_digit_bis(t_prog *rush, char *str, int n, int i)
{
	while (str[i] != 0)
	{
		if (i == 0)
			print_hund_digit(rush, str, i, n);
		else if (i == 1 && str[i] != '0')
			print_dez_digit(rush, str, n, i);
		else if (i == 2 && str[i] != '0' && str[i - 1] != '1')
			print_tence_digit(rush, str, n, i);
		else if (i == 2 && str[i] == '0' && str[i - 1] == 0)
			print_tence_digit(rush, str, n, i);
		i++;
	}
}

void	print_three_digit(t_prog *rush, char *str, int n)
{
	int	i;
	int	size;

	size = ft_strlen(rush->value);
	i = 0;
	while (i < 3)
	{
		if (size == 1 && str[i] == '0' && i == 2)
			break ;
		if (str[i] == '0' || str[i] == 0)
			i++;
		if (str[i] >= '1' && str[i] <= '9')
			break ;
	}
	if (str[i] == '\0')
		return ;
	else
		print_three_digit_bis(rush, str, n, i);
}

char	*big(t_prog *rush, int n)
{
	int		i;

	(rush->big)[0] = '1';
	i = 0;
	while (++i <= (n * 3))
		(rush->big)[i] = '0';
	(rush->big)[i] = 0;
	return (rush->big);
}
