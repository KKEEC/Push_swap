/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/17 11:36:17 by kkc               #+#    #+#             */
/*   Updated: 2025/02/09 15:27:39 by kkeec            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils/ft_utils.h"

void	print_array(int *a, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		printf("%d ", a[i]);
		i++;
	}
	printf("\n");
}

void	handle_single_argument(char **arg, int **a, int **b)
{
	int	count;

	if (ft_isvalidarg(*arg))
	{
		*a = ft_handleargs(arg);
		if (*a == NULL)
		{
			*b = NULL;
			return ;
		}
		count = ft_countsubstr(*arg, ' ');
		*b = (int *)calloc(count, sizeof(int));
		if (!*b)
		{
			ft_safe_free(a);
			return ;
		}
	}
	else
	{
		write(2, "Error\n", 6);
		*a = NULL;
		*b = NULL;
	}
}

char	*ft_joinallargs(int argc, char *argv[])
{
	int		i;
	char	*str;
	char	*temp;

	i = 1;
	str = ft_strdup("");
	while (i < argc)
	{
		temp = str;
		str = ft_strjoin(temp, argv[i]);
		free(temp);
		if (i < argc - 1)
		{
			temp = str;
			str = ft_strjoin(temp, " ");
			free(temp);
		}
		i++;
	}
	return (str);
}

static int	checksoranddup(int **a, int *sizea, int **b)
{
	if (ft_checkdup(*a, *sizea) || ft_issorted(*a, *sizea))
	{
		if (ft_checkdup(*a, *sizea))
			write(2, "Error\n", 6);
		ft_safe_free(a);
		ft_safe_free(b);
		return (1);
	}
	return (0);
}

int	main(int argc, char *argv[])
{
	char	*string;
	int		*a;
	int		*b;
	int		sizea;
	int		sizeb;

	a = NULL;
	string = ft_joinallargs(argc, argv);
	if (!string)
		return (write(2, "Error\n", 6));
	sizea = ft_countsubstr(string, ' ');
	sizeb = 0;
	handle_single_argument(&string, &a, &b);
	free(string);
	if (a == NULL)
		return (0);
	if (checksoranddup(&a, &sizea, &b) == 1)
		return (0);
	ft_initiatesort(&a, &sizea, &b, &sizeb);
	ft_safe_free(&a);
	ft_safe_free(&b);
	return (0);
}
