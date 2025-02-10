/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pushsortb.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:05:51 by kkc               #+#    #+#             */
/*   Updated: 2025/02/10 11:05:53 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

int	valueexists(int *chunkarr, int index, int value)
{
	int	i;

	i = 0;
	while (i < index)
	{
		if (chunkarr[i] == value)
			return (1);
		i++;
	}
	return (0);
}

int	find_minval(int *temparr, int *sizea, int *chunkarr, int index)
{
	int	i;
	int	minval;
	int	dup;
	int	idx;

	idx = -1;
	minval = INT_MAX;
	i = 0;
	while (i < *sizea)
	{
		dup = 0;
		if (valueexists(chunkarr, index, temparr[i]))
			dup = 1;
		if (!dup && temparr[i] < minval)
		{
			minval = temparr[i];
			idx = i;
		}
		i++;
	}
	return (idx);
}

void	find_chunkelem(int **a, int *sizea, int *chunkarr, int *chunksize)
{
	int	i;
	int	minidx;
	int	*temparr;

	if (*sizea == 0)
		return ;
	i = 0;
	temparr = (int *)malloc(sizeof(int) * (*sizea));
	if (!temparr)
		return ;
	ft_duparray(*a, temparr, *sizea);
	while (i < *chunksize)
	{
		minidx = find_minval(temparr, sizea, chunkarr, i);
		if (minidx != -1)
			chunkarr[i] = temparr[minidx];
		else
			break ;
		temparr[minidx] = INT_MAX;
		i++;
	}
	free(temparr);
}

void	pushsortb(int **a, int *sizea, int **b, int *sizeb)
{
	int	chunk_parts;
	int	chunk_size;
	int	*chunkarr;
	int	i;

	chunk_parts = 15;
	chunk_size = (*sizea / chunk_parts) + (*sizea % chunk_parts);
	while (chunk_parts > 0)
	{
		chunkarr = (int *)ft_calloc(chunk_size, sizeof(int));
		if (!chunkarr)
			return ;
		find_chunkelem(a, sizea, chunkarr, &chunk_size);
		i = chunk_size;
		while (i > 0)
		{
			processchunk(a, sizea, chunkarr, &chunk_size);
			initiatesort(a, sizea, b, sizeb);
			i--;
		}
		free(chunkarr);
		chunk_parts--;
	}
}
