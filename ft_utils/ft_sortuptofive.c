/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sortuptofive.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:06:29 by kkc               #+#    #+#             */
/*   Updated: 2025/02/10 11:06:31 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

void	ft_sorttwonums(int **a, int *sizea)
{
	if (*a[0] > *a[1])
	{
		sa(*a, *sizea);
	}
}

void	ft_sortthreenums(int **a, int *sizea)
{
	int	max_idx;
	int	min_idx;

	max_idx = ft_maxindex(*a, *sizea);
	min_idx = ft_minindex(*a, *sizea);
	if ((max_idx == (*sizea - 1)) && ((*a)[0] > (*a)[1]))
		sa(*a, *sizea);
	if ((max_idx == 0) && (min_idx == 1))
		ra(*a, *sizea);
	if ((max_idx == 1) && (min_idx == 2))
		rra(*a, *sizea);
	if ((max_idx == 0) && (min_idx == (*sizea - 1)))
	{
		sa(*a, *sizea);
		rra(*a, *sizea);
	}
	if ((max_idx == 1) && (min_idx == 0))
	{
		sa(*a, *sizea);
		ra(*a, *sizea);
	}
}

void	ft_sortfournums(int **a, int *sizea, int **b, int *sizeb)
{
	int	maxidx;

	if (*sizea != 4)
		return ;
	maxidx = ft_maxindex(*a, *sizea);
	if (maxidx == 1)
		sa(*a, *sizea);
	else if (maxidx == 2)
	{
		ra(*a, *sizea);
		ra(*a, *sizea);
	}
	else if (maxidx == 3)
	{
		rra(*a, *sizea);
	}
	pb(*a, sizea, *b, sizeb);
	ft_sortthreenums(a, sizea);
	pa(*a, sizea, *b, sizeb);
	ra(*a, *sizea);
}

void	ft_sortfivenums(int **a, int *sizea, int **b, int *sizeb)
{
	int	minidx;

	minidx = ft_minindex(*a, *sizea);
	if (minidx == 1)
		sa(*a, *sizea);
	else if (minidx == 2)
	{
		ra(*a, *sizea);
		ra(*a, *sizea);
	}
	else if (minidx == 3)
	{
		rra(*a, *sizea);
		rra(*a, *sizea);
	}
	else if (minidx == 4)
		rra(*a, *sizea);
	pb(*a, sizea, *b, sizeb);
	ft_sortfournums(a, sizea, b, sizeb);
	pa(*a, sizea, *b, sizeb);
}
