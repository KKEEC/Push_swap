/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_minindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:25:39 by kkc               #+#    #+#             */
/*   Updated: 2025/01/23 15:25:42 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_minindex(int *a, int size)
{
	int	i;
	int	minindex;

	i = 0;
	minindex = 0;
	while (i < size)
	{
		if (a[i] < a[minindex])
			minindex = i;
		i++;
	}
	return (minindex);
}
