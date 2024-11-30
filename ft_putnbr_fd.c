/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/30 00:01:17 by jemustaj          #+#    #+#             */
/*   Updated: 2024/11/30 00:09:16 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	char	c[12];
	long	nbl;
	int		i;

	if (nb == 0)
		write (1, fd, "0", 1);
	nbl = n;
	if (nbl < 0)
	{
		nbl *= -1;
		write (fd, "-", 1);
	}
	while (nbl > 0)
	{
		c[i++] = (nbl % 10) + 48;
		nbl = nbl / 10;
	}
	while (i > 0)
		write (fd, &c[i--], 1);
}