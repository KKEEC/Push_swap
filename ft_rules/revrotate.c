/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   revrotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:03:42 by kkc               #+#    #+#             */
/*   Updated: 2025/02/10 11:03:44 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils/ft_utils.h"

void	revrotate(int *a, int sizea)
{
	int	i;
	int	tmp;

	if (sizea < 2)
		return ;
	tmp = a[sizea - 1];
	i = sizea - 1;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = tmp;
}

void	rra(int *a, int sizea)
{
	revrotate(a, sizea);
	write(1, "rra\n", 4);
}

void	rrb(int *b, int sizeb)
{
	revrotate(b, sizeb);
	write(1, "rrb\n", 4);
}

void	rrr(int *a, int sizea, int *b, int sizeb)
{
	revrotate(a, sizea);
	revrotate(b, sizeb);
	write(1, "rrr\n", 4);
}
