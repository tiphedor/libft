/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnjoin.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:27:52 by msteffen          #+#    #+#             */
/*   Updated: 2017/12/01 22:29:40 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnjoin(char const *s1, char const *s2, size_t n)
{
	char			*str;
	unsigned int	i;
	unsigned int	y;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	y = 0;
	if ((str = ft_strnew(ft_strlen(s1) + n)) == NULL)
		return (NULL);
	ft_strcpy(str, s2);
	ft_strncat(str, s2, n);
	return (str);
}
