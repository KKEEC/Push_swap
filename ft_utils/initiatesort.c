/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   initiatesort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:07:22 by kkc               #+#    #+#             */
/*   Updated: 2025/02/10 11:07:23 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

void	getmaxtop(int **a, int *sizea, int **b, int *sizeb)
{
	int	i;
	int	max;

	max = (*b)[ft_maxindex(*b, *sizeb)];
	i = 0;
	while ((*b)[0] != max && i < *sizeb)
	{
		rb(*b, *sizeb);
		i++;
	}
	pb(*a, sizea, *b, sizeb);
}

void	handlenewmax(int **a, int *sizea, int **b, int *sizeb)
{
	int	i;
	int	max;

	max = (*b)[ft_maxindex(*b, *sizeb)];
	i = 0;
	while ((*b)[0] != max && i < *sizeb)
	{
		rrb(*b, *sizeb);
		i++;
	}
	pb(*a, sizea, *b, sizeb);
}

void	handlemidval(int **a, int *sizea, int **b, int *sizeb)
{
	int	i;

	i = 0;
	while ((*b)[0] > (*a)[0] && i < *sizeb)
	{
		rb(*b, *sizeb);
		i++;
	}
	while (((*a)[0] > (*b)[*sizeb - 1] || (*a)[0] < (*b)[0]) && i < *sizeb)
	{
		rrb(*b, *sizeb);
		i++;
	}
	pb(*a, sizea, *b, sizeb);
}

void	sortboth(int **a, int *sizea, int **b, int *sizeb)
{
	int	max;
	int	min;

	max = (*b)[ft_maxindex(*b, *sizeb)];
	min = (*b)[ft_minindex(*b, *sizeb)];
	if ((*a)[0] < min)
		getmaxtop(a, sizea, b, sizeb);
	else if ((*a)[0] > max && (!((*a)[0] < max && (*a)[0] > min)))
		handlenewmax(a, sizea, b, sizeb);
	else if ((*a)[0] < max && (*a)[0] > min)
		handlemidval(a, sizea, b, sizeb);
}

void	initiatesort(int **a, int *sizea, int **b, int *sizeb)
{
	if (*sizea == 0)
		return ;
	if (*sizeb == 0)
		pb(*a, sizea, *b, sizeb);
	else if (*sizeb == 1)
	{
		pb(*a, sizea, *b, sizeb);
		if ((*a)[0] > (*a)[1] && (*b)[0] < (*b)[1])
			ss(*a, *sizea, *b, *sizeb);
		else if ((*a)[0] < (*a)[1] && (*b)[0] < (*b)[1])
			sb(*b, *sizeb);
	}
	else if (*sizeb >= 2)
		sortboth(a, sizea, b, sizeb);
}
