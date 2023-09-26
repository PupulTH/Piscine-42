/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/22 13:53:45 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/22 14:10:40 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int		result;

	result = 1;
	if (nb > 0)
	{
		while (nb >= 1)
		{
			result *= nb;
			nb--;
		}
		return (result);
	}
	return (0);
}

/*
int	main(void)
{
	printf("%d", ft_iterative_factorial(52));
	return (0);
}
*/