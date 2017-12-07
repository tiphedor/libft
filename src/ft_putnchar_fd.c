/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar_fd.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 18:38:21 by msteffen          #+#    #+#             */
/*   Updated: 2017/12/07 18:46:29 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnchar_fd(int fd, int n, char c)
{
	int i;

	i = 0;
	while (i < n)
	{
		write(fd, &c, 1);
		i++;
	}
}
