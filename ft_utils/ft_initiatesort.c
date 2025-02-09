/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initiatesort.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:55:00 by kkc               #+#    #+#             */
/*   Updated: 2025/02/09 16:22:32 by kkeec            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

void	pushbacktoa(int **a, int *sizea, int **b, int *sizeb)
{
	int	i;

	i = *sizeb;
	while (i > 0)
	{
		pa(*a, sizea, *b, sizeb);
		i--;
	}
}

void	bringmintotop(int **a, int sizea)
{
	int	i;
	int	min;

	min = (*a)[ft_minindex(*a, sizea)];
	if ((*a)[0] != min)
	{
		i = 0;
		while ((*a)[0] != min && i < sizea)
		{
			ra(*a, sizea);
			i++;
		}
	}
}

void	ft_initiatesort(int **a, int *sizea, int **b, int *sizeb)
{
	if (*sizea == 2)
		ft_sorttwonums(a, sizea);
	else if (*sizea == 3)
		ft_sortthreenums(a, sizea);
	else if (*sizea == 4)
		ft_sortfournums(a, sizea, b, sizeb);
	else if (*sizea == 5)
		ft_sortfivenums(a, sizea, b, sizeb);
	else if (*sizea > 5 && *sizea < 20)
		ft_sortuntil19(a, sizea, b, sizeb);
	else if (*sizea >= 20)
	{
		pushsortb(a, sizea, b, sizeb);
		pushbacktoa(a, sizea, b, sizeb);
		bringmintotop(a, *sizea);
	}
	return ;
}
