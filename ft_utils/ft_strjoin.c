/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kkc <kkc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/28 11:51:06 by kkc               #+#    #+#             */
/*   Updated: 2025/02/09 16:27:21 by kkeec            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_utils.h"

static char	*ft_copynjoin(const char *s1, const char *s2, char *rstr)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		rstr[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		rstr[i + j] = s2[j];
		j++;
	}
	rstr[i + j] = '\0';
	return (rstr);
}

char	*ft_strjoin(const char *s1, const char *s2)
{
	int		s1len;
	int		s2len;
	char	*rstr;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	rstr = (char *)malloc((s1len + s2len) * sizeof(char) + 1);
	if (!rstr)
		return (NULL);
	return (ft_copynjoin(s1, s2, rstr));
}
