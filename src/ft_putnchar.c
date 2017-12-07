/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/07 18:37:22 by msteffen          #+#    #+#             */
/*   Updated: 2017/12/07 18:38:18 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnchar(int n, char c)
{
	ft_putnchar_fd(STDOUT_FILENO, n, c);
}
