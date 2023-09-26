/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlombar <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/09 16:17:17 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/09 19:58:49 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp_a;
	int		temp_b;

	if (*b != 0)
	{
		temp_a = *a;
		temp_b = *b;
		*a = temp_a / temp_b;
		*b = temp_a % temp_b;
	}
}
/*
int		main(int argc, char **argv)
{
	int		a;
	int		b;

	a = atoi(argv[1]);
	b = atoi(argv[2]);
	ft_ultimate_div_mod(&a, &b);
	printf("%d\n", a);
	printf("%d", b);
	return (0);
}
*/