/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:55:39 by jemustaj          #+#    #+#             */
/*   Updated: 2024/11/18 19:36:12 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	const unsigned char	*s;
	int	i;

	if (!dest || !src)
		return (NULL);
	if (dest == src || n == 0)
		return (dest);
	d = dest;
	s = src;
	if (src > dest)
		ft_memcpy(d, s, n);
	else
		while (n > 0)
		{
			d[n - 1] = s[n - 1];
			n--;
		}
	return (dest);
}

#include <stdio.h>

int	main(void)
{
	char	dest[7] = "123456";
	char	*src = "abcdefg";
	char	test_d[7] = "123456";
	char	*test_s = "abcdefg";

	printf("%s\n", (char *)ft_memmove(dest, src, 6));
	printf("%s\n", (char *)ft_memmove(test_d + 2, test_s, 5));
	return (0);
}
