/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 09:04:36 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/05 13:55:15 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	*s1;
	char	**res;
	int		sz;
	int		i;
	int		sz2;

	if (!s)
		return (NULL);
	s1 = (char *)s;
	sz = ft_wordcount(s1, c);
	res = (char **)malloc(sizeof(*res) * (sz + 1));
	if (!res)
		return (NULL);
	i = -1;
	res[sz] = NULL;
	while (++i < sz)
	{
		sz2 = ft_count(s1, c);
		while (*s1 == c)
			s1++;
		res[i] = ft_strsub(s1, 0, sz2);
		while (*s1 && *s1 != c)
			s1++;
	}
	return (res);
}
