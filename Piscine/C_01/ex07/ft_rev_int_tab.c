/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/12 20:53:33 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/12 20:53:33 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int		start;
	int		temp;

	start = 0;
	while (start < size)
	{
		temp = tab[start];
		tab[start] = tab[size];
		tab[size] = temp;
		start++;
		size--;
	}
}
/*
int 	main(void)
{
	int		n;
	int		tab[] = {1,2,3,4,5, 6};
	

	n = sizeof(tab) / sizeof(tab[0]);

	ft_rev_int_tab(tab, n - 1);
	return 0;
}
*/