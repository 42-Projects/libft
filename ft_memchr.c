/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 11:03:43 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/04/30 13:40:36 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	char		*s2;

	i = 0;
	s2 = (char *)s;
	while (i < n)
	{
		if ((unsigned char)s2[i] == (unsigned char)c)
			return ((char *)s2 + i);
		i++;
	}
	return (NULL);
}
