/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   helpersortall.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:07:11 by kkc               #+#    #+#             */
/*   Updated: 2025/02/10 11:07:13 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

void	do_rra(int **a, int *sizea, int closeidxbtm)
{
	if (*sizea == 0)
		return ;
	while (closeidxbtm < *sizea)
	{
		rra(*a, *sizea);
		closeidxbtm++;
	}
}

void	do_ra(int **a, int *sizea, int closeidxtop)
{
	int	i;

	if (*sizea == 0)
		return ;
	i = 0;
	while (i < closeidxtop)
	{
		ra(*a, *sizea);
		i++;
	}
}
