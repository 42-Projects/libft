/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/04/20 16:47:23 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/04/30 13:00:47 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*x;

	x = malloc(size);
	if (x == NULL)
		return (NULL);
	else
		ft_bzero(x, size);
	return (x);
}
