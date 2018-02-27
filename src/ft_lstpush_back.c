/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstpush_back.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/27 16:27:31 by msteffen          #+#    #+#             */
/*   Updated: 2018/02/27 16:52:47 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstpush_back(t_list **lst, void const *content, size_t content_size)
{
	t_list *lst_p;

	if (*lst == NULL)
	{
		*lst = ft_lstnew(content, content_size);
		return ;
	}
	lst_p = *lst;
	while (lst_p->next)
		lst_p = lst_p->next;
	lst_p->next = ft_lstnew(content, content_size);
}
