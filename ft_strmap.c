/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/28 12:06:25 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/05 12:30:21 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*str;
	char	*res;
	size_t	i;

	res = (s && f) ? (char *)malloc(sizeof(*res) * (ft_strlen(s) + 1)) : NULL;
	if (!res)
		return (NULL);
	str = (char *)s;
	i = -1;
	while (str[++i])
		res[i] = f(str[i]);
	res[i] = '\0';
	return (res);
}
