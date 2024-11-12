/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:13:44 by jemustaj          #+#    #+#             */
/*   Updated: 2024/11/12 18:59:37 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	chr;
	unsigned int	i;

	chr = (char)c;
	i = 0;
	while (s[i])
	{
		if (s[i] == chr)
			return ((char *)&s[i]);
		i++;
	}
	return (NULL);
}
