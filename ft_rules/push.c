/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/10 11:03:26 by kkc               #+#    #+#             */
/*   Updated: 2025/02/10 11:03:33 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../ft_utils/ft_utils.h"

void	push(int *a, int *sizea, int *b, int *sizeb)
{
	int	i;
	int	tempa;

	tempa = b[0];
	i = 0;
	while (i < *sizeb - 1)
	{
		b[i] = b[i + 1];
		i++;
	}
	b[i] = 0;
	i = *sizea;
	while (i > 0)
	{
		a[i] = a[i - 1];
		i--;
	}
	a[0] = tempa;
	(*sizea)++;
	(*sizeb)--;
}

void	pa(int *a, int *sizea, int *b, int *sizeb)
{
	push(a, sizea, b, sizeb);
	write(1, "pa\n", 3);
}

void	pb(int *a, int *sizea, int *b, int *sizeb)
{
	push(b, sizeb, a, sizea);
	write(1, "pb\n", 3);
}
