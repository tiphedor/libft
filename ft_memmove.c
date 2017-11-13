/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 18:28:05 by msteffen          #+#    #+#             */
/*   Updated: 2017/11/13 11:38:11 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int i;

	i = 0;
	if (src < dst)
		while ((int)len > 0)
		{
			((char*)dst)[len - 1] = ((char*)src)[len - 1];
			len--;
		}
	else
		while (i < len)
		{
			((char*)dst)[i] = ((char*)src)[i];
			i++;
		}
	return (dst);
}
