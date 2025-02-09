#include "ft_utils.h"

char	*ft_strdup(const char *str)
{
	int		i;
	char	*dup;

	i = 0;
	dup = (char *)malloc(ft_strlen(str) * sizeof(char) + 1);
	if (!dup)
		return (NULL);
	while (str[i] != '\0')
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
