/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/26 09:28:55 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/04 11:19:07 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*src2;
	char	*dst2;
	size_t	i;

	i = len;
	src2 = (char *)src;
	dst2 = (char *)dst;
	if (src2 < dst2)
		while (i--)
		{
			dst2[i] = src2[i];
		}
	else
		while (i--)
		{
			*dst2++ = *src2++;
		}
	return (dst);
}
