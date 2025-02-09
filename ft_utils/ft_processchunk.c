#include "ft_utils.h"

int	move_cost(int *sizea, int closeidxtop, int closeidxbtm)
{
	if ((closeidxtop - 1) <= (*sizea - closeidxbtm))
		return (1);
	return (0);
}

int	scan_top(int *a, int *sizea, int *chunkarr, int chunk_size)
{
	int	i;
	int	j;

	i = 0;
	while (i < *sizea)
	{
		j = 0;
		while (j < chunk_size)
		{
			if (a[i] == chunkarr[j])
				return (i);
			j++;
		}
		i++;
	}
	return (-1);
}

int	scan_bottom(int *a, int *sizea, int *chunkarr, int chunk_size)
{
	int	i;
	int	j;

	i = *sizea - 1;
	while (i > 0)
	{
		j = 0;
		while (j < chunk_size)
		{
			if (a[i] == chunkarr[j])
				return (i);
			j++;
		}
		i--;
	}
	return (-1);
}

void	processchunk(int **a, int *sizea, int *chunkarr, int *chunk_size)
{
	int	closeidxtop;
	int	closeidxbtm;

	closeidxtop = scan_top(*a, sizea, chunkarr, *chunk_size);
	closeidxbtm = scan_bottom(*a, sizea, chunkarr, *chunk_size);
	if (closeidxtop == -1 || closeidxbtm == -1)
	{
		if (closeidxtop == -1)
			do_rra(a, sizea, closeidxbtm);
		else if (closeidxbtm == -1)
			do_ra(a, sizea, closeidxtop);
	}
	if (move_cost(sizea, closeidxtop, closeidxbtm) == 1)
		do_ra(a, sizea, closeidxtop);
	else if (move_cost(sizea, closeidxtop, closeidxbtm) == 0)
		do_rra(a, sizea, closeidxbtm);
}
