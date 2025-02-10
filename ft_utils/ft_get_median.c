/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_median.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:05:22 by kkc               #+#    #+#             */
/*   Updated: 2025/02/10 11:05:24 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

static int	ft_mididx(int size)
{
	int	result;

	if (size % 2 == 0)
		result = size / 2;
	else
		result = (size / 2) + 1;
	return (result);
}

int	ft_bubblesort(int *array, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	ft_get_median(int *array, int size)
{
	int	num;
	int	median;
	int	*temparr;

	temparr = (int *)malloc(sizeof(int) * size);
	if (temparr == NULL)
		return (0);
	ft_duparray(array, temparr, size);
	num = ft_mididx(size);
	ft_bubblesort(temparr, size);
	median = temparr[num - 1];
	free(temparr);
	return (median);
}
