/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:13:58 by kkc               #+#    #+#             */
/*   Updated: 2025/01/17 17:18:57 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	ft_isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

int	ft_plusminus(int c)
{
	return (c == '+' || c == '-');
}

int	ft_isspace(int c)
{
	return (c == ' ');
}

int	ft_isint(long nbr)
{
	return (nbr >= INT_MIN && nbr <= INT_MAX);
}
