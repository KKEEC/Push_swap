#include "ft_utils.h"

void	ft_sortuntil19(int **a, int *sizea, int **b, int *sizeb)
{
	int	i;
	int	midval;

	if (ft_issorted(*a, *sizea))
		return ;
	i = *sizea;
	midval = ft_get_median(*a, *sizea);
	while (i > 0)
	{
		if ((*a)[0] < midval)
			pb(*a, sizea, *b, sizeb);
		else
			ra(*a, *sizea);
		i--;
	}
	ft_sortboth(a, sizea, b, sizeb);
}
