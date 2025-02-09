#include "ft_utils.h"

void	ft_duparray(int *array, int *temparr, int size)
{
	int	i;

	i = 0;
	while (i <= (size - 1))
	{
		temparr[i] = array[i];
		i++;
	}
}
