/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldauga <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/07 12:23:57 by ldauga            #+#    #+#             */
/*   Updated: 2020/12/07 12:24:06 by ldauga           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

size_t		ft_strlen(const char *c)
{
	int	i;

	if (!c)
		return (0);
	i = 0;
	while (c[i])
		i++;
	return (i);
}

char		*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		n;
	char	*str;

	if (!s2 || !s1)
		return (0);
	i = ft_strlen(s1) + ft_strlen(s2);
	if (!(str = ft_calloc(sizeof(char), i + 1)))
		return (0);
	i = 0;
	n = 0;
	while (s1[i])
	{
		str[n] = s1[i];
		i++;
		n++;
	}
	i = 0;
	while (s2[i])
		str[n++] = s2[i++];
	str[n] = 0;
	free(s1);
	return (str);
}

void		ft_bzero(void *s, size_t n)
{
	int		i;
	char	*str;

	str = s;
	i = 0;
	while (n > 0)
	{
		str[i] = 0;
		n--;
		i++;
	}
}

void		*ft_calloc(size_t count, size_t size)
{
	char	*str;
	size_t	i;

	i = 0;
	if (!(str = (char *)malloc(sizeof(char) * (count * size))))
		return (0);
	ft_bzero(str, (count * size));
	return (str);
}
