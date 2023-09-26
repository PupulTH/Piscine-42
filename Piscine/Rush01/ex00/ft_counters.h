/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_counters.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:22:58 by mbest             #+#    #+#             */
/*   Updated: 2023/09/17 20:37:16 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_COUNTERS_H
# define FT_COUNTERS_H

int	counter_view_u(int **tab, int index, int col, int size);

int	counter_view_d(int **tab, int index, int col);

int	counter_view_l(int **tab, int index, int row, int size);

int	counter_view_r(int **tab, int index, int row);

#endif
