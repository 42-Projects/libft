/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/22 12:53:44 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/05 11:33:39 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*sc;
	int		sz;

	sz = ft_strlen(s1) + 1;
	sc = (char *)malloc(sizeof(*sc) * sz);
	if (!sc)
		return (NULL);
	ft_memcpy(sc, s1, sz);
	return (sc);
}
