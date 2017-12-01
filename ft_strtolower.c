/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtolower.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:47:52 by msteffen          #+#    #+#             */
/*   Updated: 2017/12/01 18:49:19 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtolower(const char *src)
{
	char			*str;
	unsigned int	i;

	i = 0;
	if (!src)
		return (NULL);
	str = ft_strnew(ft_strlen(src));
	while (src[i])
	{
		str[i] = ft_tolower(src[i]);
		i++;
	}
	return (str);
}
