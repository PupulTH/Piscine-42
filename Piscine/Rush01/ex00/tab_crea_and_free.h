/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_crea_and_free.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 19:07:25 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/17 20:38:04 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef TAB_CREA_AND_FREE_H
# define TAB_CREA_AND_FREE_H
# include <stdlib.h>

void	free_memory(int **array, int size);

int		**parameter_tab_row(int **array, char *argv, int size, int j);

int		**parameter_tab_col(int **array, char *argv, int size);

int		**tab_creation(int size, char *argv);

#endif
