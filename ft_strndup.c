/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:40:48 by msteffen          #+#    #+#             */
/*   Updated: 2017/12/01 22:31:13 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if ((str = (char *)ft_memalloc(n + 1)) == NULL)
		return (NULL);
	return (ft_strncpy(str, s1, n));
}
