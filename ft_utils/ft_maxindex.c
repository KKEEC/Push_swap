/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_maxindex.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:09:58 by kkc               #+#    #+#             */
/*   Updated: 2025/01/16 16:58:39 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_maxindex(int *a, int size)
{
	int	i;
	int	maxindex;

	i = 0;
	maxindex = 0;
	while (i < size)
	{
		if (a[i] > a[maxindex])
			maxindex = i;
		i++;
	}
	return (maxindex);
}
