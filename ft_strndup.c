/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/10 16:40:48 by msteffen          #+#    #+#             */
/*   Updated: 2017/11/13 11:39:13 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char			*str;
	unsigned int	i;

	i = -1;
	str = (char *)ft_memalloc(n + 1);
	if (str == NULL)
		return (NULL);
	while (s1[++i] && i < n)
		str[i] = s1[i];
	str[i] = 0;
	return (str);
}
