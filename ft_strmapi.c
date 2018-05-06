/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 12:06:25 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/06 11:06:04 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*s2;
	char	*res;
	int		i;

	res = (s && f) ? (char *)malloc(sizeof(*res) * (ft_strlen(s) + 1)) : NULL;
	if (!res)
		return (NULL);
	s2 = (char *)s;
	i = -1;
	while (s2[++i])
		res[i] = f(i, s2[i]);
	res[i] = '\0';
	return (res);
}
