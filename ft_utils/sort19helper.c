#include "ft_utils.h"

void	ft_minmaxattop(int **a, int *sizea, int **b, int *sizeb)
{
	int	maxa;
	int	minb;

	maxa = (*a)[ft_maxindex(*a, *sizea)];
	minb = (*b)[ft_minindex(*b, *sizeb)];
	if ((*a)[0] == maxa && (*b)[0] == minb)
		rr(*a, *sizea, *b, *sizeb);
	else if ((*a)[0] == maxa && (*b)[0] != minb)
		ra(*a, *sizea);
	else if ((*a)[0] != maxa && (*b)[0] == minb)
		rb(*b, *sizeb);
}

void	ft_solveboth(int **a, int *sizea, int **b, int *sizeb)
{
	if (((*a)[0] > (*a)[1]) && ((*b)[0] < (*b)[1]))
	{
		ss(*a, *sizea, *b, *sizeb);
		rr(*a, *sizea, *b, *sizeb);
	}
	else if (((*a)[0] < (*a)[1]) && ((*b)[0] > (*b)[1]))
		rr(*a, *sizea, *b, *sizeb);
	else if (((*a)[0] > (*a)[1]) && ((*b)[0] > (*b)[1]))
	{
		sa(*a, *sizea);
		rr(*a, *sizea, *b, *sizeb);
	}
	else if (((*a)[0] < (*a)[1]) && ((*b)[0] < (*b)[1]))
	{
		sb(*b, *sizeb);
		rr(*a, *sizea, *b, *sizeb);
	}
}

void	ft_solvea(int **a, int *sizea)
{
	if ((*a)[0] > (*a)[1])
		sa(*a, *sizea);
	else
		ra(*a, *sizea);
}

void	ft_solveb(int **b, int *sizeb)
{
	if ((*b)[0] < (*b)[1])
		sb(*b, *sizeb);
	else
		rb(*b, *sizeb);
}

void	ft_sortboth(int **a, int *sizea, int **b, int *sizeb)
{
	int	i;

	i = 0;
	while (i < (*sizea + *sizeb))
	{
		ft_minmaxattop(a, sizea, b, sizeb);
		if (!ft_issorted(*a, *sizea) && !ft_issorteddesc(*b, *sizeb))
			ft_solveboth(a, sizea, b, sizeb);
		else if (!ft_issorted(*a, *sizea) && ft_issorteddesc(*b, *sizeb))
			ft_solvea(a, sizea);
		else if (ft_issorted(*a, *sizea) && !ft_issorteddesc(*b, *sizeb))
			ft_solveb(b, sizeb);
		i++;
	}
	if (!ft_issorted(*a, *sizea) || !ft_issorteddesc(*b, *sizeb))
		ft_sortboth(a, sizea, b, sizeb);
	i = *sizeb;
	while (i > 0)
	{
		pa(*a, sizea, *b, sizeb);
		i--;
	}
}
