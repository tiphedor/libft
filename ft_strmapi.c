/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:46:29 by msteffen          #+#    #+#             */
/*   Updated: 2017/11/08 18:16:54 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*strn;
	unsigned int	i;

	if (!s)
		return (NULL);
	i = -1;
	strn = ft_strnew(ft_strlen(s));
	if (!strn)
		return (NULL);
	while (s[++i])
		strn[i] = f(i, s[i]);
	return (strn);
}
