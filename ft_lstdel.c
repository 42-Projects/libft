/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 11:25:41 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/03 11:27:58 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	if (!alst || !*alst)
		return ;
	while (*alst)
	{
		tmp = *alst;
		*alst = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = NULL;
	}
}
