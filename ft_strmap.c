/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/08 13:18:58 by msteffen          #+#    #+#             */
/*   Updated: 2017/11/08 18:17:02 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
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
		strn[i] = f(s[i]);
	return (strn);
}
