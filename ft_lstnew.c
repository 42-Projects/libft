/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mlewis-l <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/03 11:17:52 by mlewis-l          #+#    #+#             */
/*   Updated: 2018/05/03 11:22:44 by mlewis-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*lst;

	if ((lst = (t_list *)malloc(sizeof(*lst))))
	{
		lst->content_size = content ? content_size : 0;
		if ((lst->content = (void *)malloc(sizeof(content))))
			if (content)
				ft_memcpy(lst->content, content, content_size);
			else
				lst->content = NULL;
		else
			free(lst);
		lst->next = NULL;
	}
	return (lst);
}
