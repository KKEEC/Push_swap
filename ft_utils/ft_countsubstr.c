/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countsubstr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:13:42 by kkc               #+#    #+#             */
/*   Updated: 2025/01/17 12:04:18 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

size_t	ft_countsubstr(char const *str, char c)
{
	size_t	i;
	size_t	count;
	int		not_delim;

	i = 0;
	count = 0;
	not_delim = 0;
	while (str[i])
	{
		if (str[i] == c)
		{
			not_delim = 0;
		}
		else if (not_delim == 0)
		{
			not_delim = 1;
			count++;
		}
		i++;
	}
	return (count);
}
