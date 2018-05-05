/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/27 11:21:23 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/04 12:14:44 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*str;

	str = s;
	while (*str)
		if (*str++ == c)
			return ((char *)--str);
	if (c == '\0')
		return ((char *)str);
	return (NULL);
}
