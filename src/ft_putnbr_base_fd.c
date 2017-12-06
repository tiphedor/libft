/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base_fd.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msteffen <msteffen@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/12/06 13:48:58 by msteffen          #+#    #+#             */
/*   Updated: 2017/12/06 13:52:58 by msteffen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_putnbr_recurs(int nbr, char *base, int base_length, int fd)
{
	if (nbr != 0)
	{
		ft_putnbr_recurs(nbr / base_length, base, base_length, fd);
		ft_putchar_fd(base[nbr % base_length], fd);
	}
}

static int		base_check(char *base)
{
	int i;
	int y;

	i = 0;
	y = 0;
	while (base[i] != '\0')
	{
		if (base[i] == '+' || base[y] == '-')
			return (0);
		while (base[y] != '\0')
		{
			if (base[i] == base[y] && i != y)
				return (0);
			y++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base_fd(int fd, int nbr, char *base)
{
	int		base_size;
	long	nb;

	nb = nbr;
	base_size = ft_strlen(base);
	if (base_size <= 1)
		return ;
	if (!base_check(base))
		return ;
	if (nb < 0)
	{
		ft_putchar_fd('-', fd);
		nb *= -1;
	}
	ft_putnbr_recurs(nb, base, base_size, fd);
}
