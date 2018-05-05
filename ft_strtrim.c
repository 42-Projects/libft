/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 08:27:31 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/02 10:22:28 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	unsigned int	i;
	unsigned int	l;
	char			*fstr;

	if (!s)
		return (NULL);
	i = 0;
	l = 0;
	while (s[i] && ft_iswhitespace(s[i]))
	{
		i++;
	}
	l = ft_strlen(&s[i]) - 1;
	while (s[i] && ft_iswhitespace(s[l + i]))
	{
		l--;
	}
	if (!(fstr = ft_strnew(l + 1)))
		return (NULL);
	ft_strncpy(fstr, (s + i), (l + 1));
	return (fstr);
}
