/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 14:00:56 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/12 20:49:03 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_compute_combn(int *tab, int depthmax, int depth, int prev_i);

static void	ft_putnum(int *tab, int depth);

void		ft_print_combn(int n);

static void	ft_putnum(int *tab, int depth)
{
	char	ch;
	int		i;

	i = 0;
	while (i < depth)
	{
		ch = tab[i++] + '0';
		write(1, &ch, 1);
	}
	if (tab[0] != 10 - depth)
		write(1, ", ", 2);
}

static void	ft_compute_combn(int *tab, int depthmax, int depth, int prev_i)
{
	int	i;

	if (depth == depthmax)
	{
		ft_putnum(tab, depthmax);
		return ;
	}
	i = prev_i + 1;
	while (i < 10)
	{
		tab[depth] = i;
		ft_compute_combn(tab, depthmax, depth + 1, i);
		i++;
	}
}

void	ft_print_combn(int n)
{
	if (n >= 1 && n < 10)
		ft_compute_combn((int [9]){0}, n, 0, -1);
}
/*
void	main(void)
{
	ft_print_combn(8);
	return ;
}
*/