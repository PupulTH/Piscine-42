/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 18:07:48 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/26 10:14:35 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	int				diff;

	i = 0;
	diff = 0;
	while (!diff && (s1[i] != 0) && (s2[i] != 0) && (i < n))
	{
		diff = s1[i] - s2[i];
		i++;
	}
	if (i < n && !diff && (s1[i] == 0 || s2[i] == 0))
		diff = s1[i] - s2[i];
	return (diff);
}
