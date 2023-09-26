/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 20:25:37 by vfresnai          #+#    #+#             */
/*   Updated: 2023/09/24 18:43:58 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

/*
Parse file order : 
- Open file, load it in memory, close it
- Split all lines into a big array
- For all lines, insert a line entry, if any invalid line
we get out and print error
- When all lines read, we check if all entries are here
*/

int	ft_check_entries_2(t_prog *rush, const char **entries)
{
	t_dict_entry		*entries_list;
	int					i;

	i = -1;
	while (++i < TOTAL_ENTRIES)
	{
		entries_list = rush->entries_list;
		while (entries_list)
		{
			if (ft_strcmp(entries_list->value, entries[i]) == 0)
				break ;
			entries_list = entries_list->next;
		}
		if (!entries_list)
		{
			ft_putstr("Dict Error\n");
			return (-1);
		}
	}
	return (0);
}

int	ft_check_entries(t_prog *rush)
{
	const char			*entries[] = {\
	"0", "1", "2", "3", "4", "5", "6", "7", "8", "9", "10", \
	"11", "12", "13", "14", "15", "16", "17", "18", "19", "20", \
	"30", "40", "50", "60", "70", "80", "90", "100", "1000", \
	"1000000", "1000000000", "1000000000000", "1000000000000000", \
	"1000000000000000000", "1000000000000000000000", \
	"1000000000000000000000000", "1000000000000000000000000000", \
	"1000000000000000000000000000000", \
	"1000000000000000000000000000000000", \
	"1000000000000000000000000000000000000"};

	if (ft_check_entries_2(rush, entries) < 0)
		return (-1);
	return (0);
}

char	**ft_parse_file(t_prog *rush, char *filecontent)
{
	char	**dict;
	int		i;

	i = 0;
	dict = ft_split(filecontent, "\n");
	if (!dict)
		return (NULL);
	while (dict[i])
	{
		if (ft_parse_line(rush, dict[i++]) < 0)
		{
			ft_putstr("Dict Error\n");
			return (NULL);
		}
	}
	if (ft_check_entries(rush) < 0)
		return (NULL);
	return (dict);
}
