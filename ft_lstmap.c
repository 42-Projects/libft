/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 11:29:49 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/03 11:37:42 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*ret;
	t_list	*lst_p;

	ret = (lst && f) ? f(lst) : NULL;
	lst_p = ret;
	while (lst_p && lst->next)
	{
		lst_p->next = f(lst->next);
		lst = lst->next;
		lst_p = lst_p->next;
	}
	return (ret);
}
