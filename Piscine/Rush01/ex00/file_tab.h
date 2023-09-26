/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   file_tab.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 18:35:55 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/17 22:48:35 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILE_TAB_H
# define FILE_TAB_H
# include <stdlib.h>
# include "tab_crea_and_free.h"
# include "ft_affiche.h"
# include "no_duplicate.h"
# include "is_valid.h"

void	it_is_solved(int **array, int size);

int		bis_solve(int **array, int r, int c, int size);

int		solve(int **array, int r, int c, int size);

int		solve_pre(int **array, int r, int c, int size);

#endif
