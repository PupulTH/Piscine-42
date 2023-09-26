/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 17:45:43 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/17 22:20:17 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "file_tab.h"
#include "test_argv.h"
#include "functions.h"

int	main(int argc, char *argv[])
{
	int		size;
	int		is_it_posible;

	if (argc == 2)
	{
		if ((arg_valid(argv[1])) > 0)
		{
			size = arg_valid(argv[1]);
			is_it_posible = solve_pre(tab_creation(size, argv[1]), 1, 1,
					size + 2);
			if (is_it_posible == 0)
				ft_putstr("nul");
		}
		else if (arg_valid(argv[1]) == 0)
			ft_putstr("Error");
	}
	return (0);
}
