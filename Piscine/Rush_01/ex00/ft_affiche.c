/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_affiche.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:05:04 by mbest             #+#    #+#             */
/*   Updated: 2023/09/17 22:41:35 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

void	ft_affiche(int **tab, int size)
{
	int	i;
	int	j;

	i = 1;
	j = 1;
	while (i < size - 1)
	{
		while (j < size - 1)
		{
			ft_putchar(tab[i][j] + '0');
			if (!(j == size - 2))
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		j = 1;
		i++;
	}
}
