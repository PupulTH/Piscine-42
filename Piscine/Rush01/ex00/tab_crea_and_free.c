/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_crea_and_free.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 13:07:13 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/17 21:29:27 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	free_memory(int **array, int size)
{
	int		i;

	i = 0;
	while (i < size)
	{
		free(array[i]);
		i++;
	}
	free(array);
}

int	**parameter_tab_row(int **array, char *argv, int size, int j)
{
	int		i;

	i = 1;
	while (i < (size - 1))
	{
		array[i][0] = (argv[j] - 48);
		i++;
		j = j + 2;
	}
	i = 1;
	while (i < (size - 1))
	{
		array[i][size -1] = (argv[j] - 48);
		i++;
		j = j + 2;
	}
	return (array);
}

int	**parameter_tab_col(int **array, char *argv, int size)
{
	int		i;
	int		j;

	i = 1;
	j = 0;
	while (i < (size - 1))
	{
		array[0][i] = (argv[j] - 48);
		i++;
		j = j + 2;
	}
	i = 1;
	while (i < (size - 1))
	{
		array[size -1][i] = (argv[j] - 48);
		i++;
		j = j + 2;
	}
	return (parameter_tab_row(array, argv, size, j));
}

int	**tab_creation(int size, char *argv)
{
	int		**array;
	int		i;

	array = malloc((size + 2) * sizeof(int *));
	i = 0;
	while (i < size + 2)
	{
		array[i] = malloc((size + 2) * sizeof(int));
		i++;
	}
	return (parameter_tab_col(array, argv, size + 2));
}
