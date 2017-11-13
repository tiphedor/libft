/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 14:51:33 by msteffen          #+#    #+#             */
/*   Updated: 2017/11/08 18:17:51 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char			*str;
	unsigned int	y;

	if (!s)
		return (NULL);
	y = 0;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	while (y < len)
	{
		str[y] = s[start];
		y++;
		start++;
	}
	str[y] = '\0';
	return (str);
}
