/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:33:45 by mbest             #+#    #+#             */
/*   Updated: 2023/09/17 20:50:51 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_counters.h"

int	is_valid_row(int **tab, int row, int size)
{
	int	counter;
	int	index;

	index = 1;
	counter = counter_view_l(tab, index, row, size);
	if (counter == tab[row][0])
	{
		counter = counter_view_r(tab, size - 2, row);
		if (counter == tab[row][size - 1])
			return (1);
		else
			return (0);
	}
	return (0);
}

int	is_valid_column(int **tab, int col, int size)
{
	int	counter;
	int	index;

	col = size - 2;
	while (col > 0)
	{
		index = 1;
		counter = counter_view_u(tab, index, col, size);
		if (!(counter == tab[0][col]))
			return (0);
		counter = counter_view_d(tab, size - 2, col);
		if (!(counter == tab[size - 1][col]))
			return (0);
		col--;
	}
	return (1);
}
