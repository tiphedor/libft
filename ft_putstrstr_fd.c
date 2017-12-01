/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrstr_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/28 17:33:14 by msteffen          #+#    #+#             */
/*   Updated: 2017/11/28 17:33:37 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstrstr_fd(char **str, int len, int fd)
{
	int i;

	i = -1;
	while (++i < len)
		ft_putstr_fd(str[i], fd);
}
