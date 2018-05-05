/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/29 08:43:19 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/05 13:35:34 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s2;
	char	*sub;
	size_t	i;
	size_t	j;

	sub = (char *)malloc(sizeof(*sub) * (len + 1));
	if (!s || !sub)
		return (NULL);
	s2 = (char *)s;
	j = (size_t)start;
	i = (size_t)len;
	sub[i] = '\0';
	while (i--)
		sub[i] = s2[j + i];
	return (sub);
}
