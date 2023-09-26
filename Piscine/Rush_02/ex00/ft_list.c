/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfresnai <vfresnai@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/23 17:33:44 by vfresnai          #+#    #+#             */
/*   Updated: 2023/09/24 18:21:20 by vfresnai         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict_entry	*ft_create_dict_entry(char *str, char *value)
{
	t_dict_entry	*elem;

	elem = malloc(sizeof(t_dict_entry));
	if (!elem)
		return (NULL);
	elem->next = NULL;
	elem->value = value;
	elem->str = str;
	return (elem);
}

int	ft_push_dict_entry(t_dict_entry	**begin_list, char *str, char *value)
{
	t_dict_entry	*new;

	new = ft_create_dict_entry(str, value);
	if (!new)
		return (-1);
	if (*begin_list)
		new->next = *begin_list;
	*begin_list = new;
	return (0);
}

char	*ft_fetch_value(t_dict_entry *begin_list, char *value)
{
	while (begin_list)
	{
		if (ft_strcmp(begin_list->value, value) == 0)
			return (begin_list->str);
		begin_list = begin_list->next;
	}
	return (NULL);
}

void	ft_clean_list(t_dict_entry *begin_list)
{
	t_dict_entry	*next;

	while (begin_list)
	{
		next = begin_list->next;
		free(begin_list);
		begin_list = next;
	}
}
