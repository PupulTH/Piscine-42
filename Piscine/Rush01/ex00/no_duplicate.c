/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:32:53 by mbest             #+#    #+#             */
/*   Updated: 2023/09/17 22:34:09 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"
#include <stdio.h>

int	no_duplicate_row(int **tab, int row, int num, int size)
{
	int	index;

	index = 1;
	while (index < size - 1)
	{
		if (tab[row][index] != num)
			index++;
		else
			return (0);
	}
	return (1);
}

int	no_duplicate_col(int **tab, int column, int num, int size)
{
	int	index;

	index = 1;
	while (index < size - 1)
	{
		if (tab[index][column] != num)
			index++;
		else
			return (0);
	}
	return (1);
}
