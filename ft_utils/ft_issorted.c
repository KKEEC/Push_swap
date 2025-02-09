/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_issorted.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 16:29:31 by kkc               #+#    #+#             */
/*   Updated: 2025/02/09 16:29:57 by kkeec            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_issorted(int *a, int size)
{
	int	i;

	i = 1;
	if (size == 1 || size == 0)
		return (1);
	while (i < size)
	{
		if (a[i - 1] > a[i])
			return (0);
		i++;
	}
	return (1);
}

int	ft_issorteddesc(int *a, int size)
{
	int	i;

	i = 1;
	if (size == 0 || size == 1)
		return (0);
	while (i < size)
	{
		if (a[i - 1] < a[i])
			return (0);
		i++;
	}
	return (1);
}
