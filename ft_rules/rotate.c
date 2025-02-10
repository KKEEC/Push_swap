/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:03:56 by kkc               #+#    #+#             */
/*   Updated: 2025/02/10 11:03:58 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils/ft_utils.h"

void	rotate(int *a, int sizea)
{
	int	i;
	int	temp;

	i = 0;
	temp = a[0];
	while (i < sizea - 1)
	{
		a[i] = a[i + 1];
		i++;
	}
	a[i] = temp;
}

void	ra(int *a, int sizea)
{
	rotate(a, sizea);
	write(1, "ra\n", 3);
}

void	rb(int *a, int sizea)
{
	rotate(a, sizea);
	write(1, "rb\n", 3);
}

void	rr(int *a, int sizea, int *b, int sizeb)
{
	rotate(a, sizea);
	rotate(b, sizeb);
	write(1, "rr\n", 3);
}
