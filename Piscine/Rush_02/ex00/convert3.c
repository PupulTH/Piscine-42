/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert3.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 21:35:38 by vfresnai          #+#    #+#             */
/*   Updated: 2023/09/24 22:15:39 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	espace_or_no(t_prog *rush)
{
	if (rush->space_flag == 1)
		ft_putchar(' ');
	if (rush->space_flag == 0)
		rush->space_flag = 1;
}
