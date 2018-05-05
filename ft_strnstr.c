/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 13:38:15 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/02 13:00:41 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		l = 0;
		while (i + l < len && haystack[i + l] == needle[l] && needle[l] != '\0')
		{
			l++;
		}
		if (needle[l] == '\0')
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
