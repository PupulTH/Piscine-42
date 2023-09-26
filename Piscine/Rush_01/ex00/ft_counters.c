/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counters.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:24:15 by mbest             #+#    #+#             */
/*   Updated: 2023/09/17 20:37:16 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	counter_view_u(int **tab, int index, int col, int size)
{
	int		counter;
	int		max;

	counter = 1;
	max = tab[index][col];
	while (index++ < size - 1)
	{
		if (tab[index][col] > max)
		{
			counter++;
			max = tab[index][col];
		}
	}
	return (counter);
}

int	counter_view_d(int **tab, int index, int col)
{
	int		counter;
	int		max;

	counter = 1;
	max = tab[index][col];
	while (index-- >= 1)
	{
		if (tab[index][col] > max)
		{
			counter++;
			max = tab[index][col];
		}
	}
	return (counter);
}

int	counter_view_l(int **tab, int index, int row, int size)
{
	int		counter;
	int		max;

	counter = 1;
	max = tab[row][index];
	while (index++ < size - 1)
	{
		if (tab[row][index] > max)
		{
			counter++;
			max = tab[row][index];
		}
	}
	return (counter);
}

int	counter_view_r(int **tab, int index, int row)
{
	int		counter;
	int		max;

	counter = 1;
	max = tab[row][index];
	while (index-- >= 1)
	{
		if (tab[row][index] > max)
		{
			counter ++;
			max = tab[row][index];
		}
	}
	return (counter);
}
