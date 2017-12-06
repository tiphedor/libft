/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 14:37:50 by msteffen          #+#    #+#             */
/*   Updated: 2017/12/06 14:39:26 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_putunbr_fd(unsigned int n, int fd)
{
	if (n < 9)
		ft_putchar_fd(n + '0', fd);
	else
	{
		ft_putunbr_fd(n / 10, fd);
		ft_putchar_fd((n % 10) + '0', fd);
	}
}
