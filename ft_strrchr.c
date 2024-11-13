/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 19:57:19 by jemustaj          #+#    #+#             */
/*   Updated: 2024/11/13 14:04:35 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char			chr;
	unsigned int	i;
	char			*res;

	chr = (char)c;
	i = 0;
	res = NULL;
	while (s[i])
	{
		if (s[i] == chr)
			res = ((char *)&s[i]);
		i++;
	}
	if (s[i] == c)
		res = (char *)&s[i];
	return (res);
}
