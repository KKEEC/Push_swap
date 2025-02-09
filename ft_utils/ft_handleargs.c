/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handleargs.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:14:33 by kkc               #+#    #+#             */
/*   Updated: 2025/02/09 16:12:18 by kkeec            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

static void	freestrings(char **strings, int i)
{
	while (strings[i] != NULL)
	{
		free(strings[i]);
		i++;
	}
	free(strings);
}

static int	process_strings(char **strings, int **a)
{
	int		i;
	long	val;

	i = 0;
	while (strings[i] != NULL)
	{
		val = ft_atol(strings[i]);
		if (!(val >= INT_MIN && val <= INT_MAX))
		{
			write(2, "Error\n", 6);
			freestrings(strings, i);
			strings = NULL;
			return (0);
		}
		(*a)[i] = (int)val;
		free(strings[i]);
		i++;
	}
	free(strings);
	strings = NULL;
	return (1);
}

int	*ft_handleargs(char **argv)
{
	size_t	totalargs;
	char	**strings;
	int		*a;
	int		error;

	totalargs = ft_countsubstr(*argv, ' ');
	strings = ft_split(*argv, ' ');
	if (!strings)
		return (NULL);
	a = (int *)malloc(sizeof(int) * totalargs);
	if (!a)
	{
		free_strings(strings, totalargs);
		return (NULL);
	}
	error = process_strings(strings, &a);
	if (error == 0)
	{
		free(a);
		return (NULL);
	}
	return (a);
}
