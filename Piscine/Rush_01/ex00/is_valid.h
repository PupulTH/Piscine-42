/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:37:31 by mbest             #+#    #+#             */
/*   Updated: 2023/09/17 20:37:12 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IS_VALID_H
# define IS_VALID_H
# include "ft_counters.h"

int	is_valid_row(int **tab, int row, int size);

int	is_valid_column(int **tab, int col, int size);

#endif
