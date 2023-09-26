/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 13:41:03 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/26 10:25:27 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_putunbr(unsigned int unb);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putunbr(unsigned int unb)
{
	unb = unb * (-1);
	ft_putnbr(unb / 10);
	ft_putnbr(unb % 10);
}

void	ft_putnbr(int nb)
{
	if (nb >= 0 && nb < 10)
	{
		nb = nb + '0';
		ft_putchar(nb);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb < -2147483647)
		{
			ft_putunbr(nb);
		}
		else
		{
			ft_putnbr(nb * (-1));
		}
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
