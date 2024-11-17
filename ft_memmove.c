/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 20:55:39 by jemustaj          #+#    #+#             */
/*   Updated: 2024/11/17 22:29:50 by jemustaj         ###   ########.fr       */
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
	{
		i = 0;
		while ((size_t)i < n)
		{
			d[i] = s[i];
			i++;
		}
	}
	else
	{
		i = n;
		while (i > 0)
		{
			d[i - 1] = s[i - 1];
			i--;
		}
	}
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	dest[7] = "123456";
	//char	*pointer_dest = dest;
	char	*src = "abcdefg";
	//char	*pointer_src = src;

	char	test[7] = "123456";
	printf("%s\n", (char *)ft_memmove(dest, src, 6));
	printf("%s\n", (char *)ft_memmove(test + 2, test, 2));
	return (0);
}*/
