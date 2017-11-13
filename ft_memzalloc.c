/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memzaloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:29:05 by msteffen          #+#    #+#             */
/*   Updated: 2017/11/10 16:30:20 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memzalloc(size_t size)
{
	void *ptr;

	ptr = ft_memalloc(size);
	ft_bzero(ptr, size);
	return (ptr);
}
