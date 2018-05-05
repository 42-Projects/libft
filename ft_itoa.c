/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/02 10:02:23 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/03 10:57:47 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	size_t	i;
	size_t	nsz;
	char	*str;

	i = 0;
	if (n == -2147483648)
		return (ft_strdup("2147483648"));
	nsz = ft_nblen(n, 10);
	if (!(str = (char *)malloc(sizeof(char) * (nsz + 1))))
		return (NULL);
	str[nsz] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
		i += 1;
	}
	while (i < nsz--)
	{
		str[nsz] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}
