/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 13:21:44 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/04 12:10:08 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	if (!(*n))
		return (h);
	j = ft_strlen(h) - ft_strlen(n) + 1;
	while (j-- > 0)
	{
		if (*h == *n)
		{
			i = -1;
			while (n[++i])
				if (h[i] != n[i])
					break ;
			if (n[i] == '\0')
				return (h);
		}
		h++;
	}
	return (NULL);
}
