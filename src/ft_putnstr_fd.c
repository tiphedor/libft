/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/12 13:59:31 by msteffen          #+#    #+#             */
/*   Updated: 2017/12/12 14:01:25 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnstr_fd(int n, char const *s, int fd)
{
	int i;

	i = -1;
	if (!s)
		return (0);
	while (i < (n - 1) && s[++i])
		ft_putchar_fd(s[i], fd);
	return (i);
}
