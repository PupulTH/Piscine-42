/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adthomas <adthomas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 14:30:44 by adthomas          #+#    #+#             */
/*   Updated: 2023/09/13 14:51:10 by adthomas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		flag;

	i = 0;
	flag = 0;
	while (str[i] != '\0')
	{
		if (flag == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			flag++;
		}
		else if (flag > 0 && (str[i] >= 'A' && str[i] <= 'Z'))
			str[i] += 32;
		else if ((str[i] < '0') || (str[i] > '9' && str[i] < 'A')
			|| str[i] > 'z' || (str[i] > 'Z' && str[i] < 'a'))
		{
			flag = 0;
		}
		else
			flag++;
		i++;
	}
	return (str);
}
