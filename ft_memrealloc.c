/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memrealloc.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 20:29:58 by msteffen          #+#    #+#             */
/*   Updated: 2017/11/10 13:04:22 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memrealloc(void **ptr, size_t old_size, size_t new_size)
{
	void *buffer;

	buffer = ft_memalloc(old_size);
	ft_memcpy(buffer, *ptr, old_size);
	*ptr = realloc(*ptr, new_size);
	ft_memcpy(*ptr, buffer, old_size);
	ft_memdel(&buffer);
	return (*ptr);
}
