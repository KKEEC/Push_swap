/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/16 10:13:21 by kkc               #+#    #+#             */
/*   Updated: 2025/01/16 10:13:23 by kkc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

static char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	j;
	char	*sstr;

	i = 0;
	j = 0;
	if (!s)
		return (NULL);
	sstr = (char *)malloc(sizeof(char) * (len + 1));
	if (!sstr)
		return (NULL);
	while (s[i])
	{
		if (i >= start && j < len)
		{
			sstr[j] = s[i];
			j++;
		}
		i++;
	}
	sstr[j] = '\0';
	return (sstr);
}

static char	*ft_strchr(const char *str, int c)
{
	while (*str)
	{
		if (*str == (char)c)
			return ((char *)str);
		str++;
	}
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	substrl;
	size_t	i;

	result = (char **)malloc((ft_countsubstr(s, c) + 1) * sizeof(char *));
	if (!s || !result)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
		{
			if (!ft_strchr(s, c))
				substrl = ft_strlen(s);
			else
				substrl = ft_strchr(s, c) - s;
			result[i++] = ft_substr(s, 0, substrl);
			s += substrl;
		}
	}
	result[i] = NULL;
	return (result);
}
