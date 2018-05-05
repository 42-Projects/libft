/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/30 08:13:43 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/02 17:59:03 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*nstr;

	if (!s1 || !s2)
		return (NULL);
	nstr = (char *)malloc(sizeof(*nstr) * (ft_strlen(s1) +
			ft_strlen(s2) + 1));
	if (!nstr)
		return (NULL);
	ft_strcpy(nstr, s1);
	ft_strcat(nstr, s2);
	return (nstr);
}
