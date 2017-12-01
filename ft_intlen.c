/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiphedor <tiphedor@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/01 18:21:32 by tiphedor          #+#    #+#             */
/*   Updated: 2017/12/01 18:23:06 by tiphedor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_intlen(unsigned int n)
{
	unsigned int sz;
	unsigned int nb;

	nb = ft_abs(n);
	sz = 1;
	while (nb > 9)
	{
		nb /= 10;
		sz++;
	}
	return (sz);
}
