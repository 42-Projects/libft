/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 12:57:09 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/04 14:33:55 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t		d;
	size_t		s;

	d = ft_strlen(dst);
	s = ft_strlen(src);
	if (dstsize > d)
	{
		dstsize = dstsize > d + s ? d + s + 1 : dstsize;
		dst[--dstsize] = '\0';
		while (dstsize-- > d)
			dst[dstsize] = src[dstsize - d];
		dstsize++;
	}
	return (dstsize + s);
}
