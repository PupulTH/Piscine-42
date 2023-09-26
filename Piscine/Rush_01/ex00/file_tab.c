/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 16:00:23 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/17 22:49:52 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "tab_crea_and_free.h"
#include "ft_affiche.h"
#include "no_duplicate.h"
#include "is_valid.h"

int	solve(int **array, int r, int c, int size);

void	it_is_solved(int **array, int size)
{
	ft_affiche(array, size);
	free_memory(array, size);
}

int	bis_solve(int **array, int r, int c, int size)
{
	int		k;

	k = 1;
	while (k < size - 1)
	{
		if (no_duplicate_row(array, r, k, size) == 1)
		{
			if (no_duplicate_col(array, c, k, size) == 1)
			{
				array[r][c] = k;
				if (solve(array, r, c + 1, size) == 1)
					return (1);
				array[r][c] = 0;
			}
		}
		k++;
	}
	return (0);
}

int	solve(int **array, int r, int c, int size)
{
	if (r == size - 1)
	{
		if ((is_valid_column(array, c, size)) == 1)
		{
			it_is_solved(array, size);
			return (1);
		}
	}
	else if (c == size - 1)
	{
		if ((is_valid_row(array, r, size)) == 1)
			return (solve(array, r + 1, 1, size));
		else
			return (0);
	}
	else
	{
		if (bis_solve(array, r, c, size) == 1)
			return (1);
	}
	return (0);
}

int	solve_pre(int **array, int r, int c, int size)
{
	if ((solve(array, r, c, size)) == 0)
	{
		free_memory(array, size);
		return (0);
	}
	else
		return (1);
}
