/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/24 18:12:17 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/24 21:27:36 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

int	ft_free_memory(t_prog *rush, t_file *file, char **tab)
{
	int	i;

	i = 0;
	ft_unload_file(file);
	ft_clean_list(rush->entries_list);
	if (tab)
	{
		while (tab[i])
			free(tab[i++]);
		free(tab[i]);
		free(tab);
	}
	return (0);
}

int	main(int argc, char **argv)
{
	t_prog	rush;
	t_file	dico;
	char	**tab;

	while (1)
	{
		rush.entries_list = NULL;
		tab = NULL;
		if (ft_parse_args(&rush, argc, argv) < 0)
			break ;
		if (ft_init_file(&dico, rush.dict_name) < 0)
			break ;
		if (ft_load_file(&dico) < 0)
			break ;
		tab = ft_parse_file(&rush, dico.buffer);
		if (!tab)
			break ;
		if (get_len_nb(&rush) < 0)
			break ;
		break ;
	}
	ft_free_memory(&rush, &dico, tab);
	return (0);
}
