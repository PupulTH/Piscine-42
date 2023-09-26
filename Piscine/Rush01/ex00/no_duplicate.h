/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   no_duplicate.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:34:19 by mbest             #+#    #+#             */
/*   Updated: 2023/09/17 22:19:36 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NO_DUPLICATE_H
# define NO_DUPLICATE_H
# include "functions.h"
# include <stdio.h>

int	no_duplicate_row(int **tab, int row, int num, int size);

int	no_duplicate_col(int **tab, int column, int num, int size);

#endif
