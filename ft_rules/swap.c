/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:04:07 by kkc               #+#    #+#             */
/*   Updated: 2025/02/10 11:04:09 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils/ft_utils.h"

void	swap(int *arr, int size)
{
	int	temp;

	if (size < 2)
		return ;
	temp = arr[0];
	arr[0] = arr[1];
	arr[1] = temp;
}

void	sa(int *arr, int size)
{
	swap(arr, size);
	write(1, "sa\n", 3);
}

void	sb(int *arr, int size)
{
	swap(arr, size);
	write(1, "sb\n", 3);
}

void	ss(int *a, int sizea, int *b, int sizeb)
{
	swap(a, sizea);
	swap(b, sizeb);
	write(1, "ss\n", 3);
}
