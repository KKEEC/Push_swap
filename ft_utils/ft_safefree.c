#include "ft_utils.h"

void	ft_safe_free(int **ptr)
{
	if (*ptr != NULL)
	{
		free(*ptr);
		*ptr = NULL;
	}
}
