/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/29 19:45:00 by jemustaj          #+#    #+#             */
/*   Updated: 2024/11/29 23:33:25 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_splits(char const *s, char c)
{
	int	output;

	output = 0;
	while (*s != '\0')
	{
		if (*s == c)
			output++;
		s++;
	}
	return (output + 1);
}

static char	*strldup(char const *s, size_t len)
{
	char	*dup;

	dup = (char *)ft_calloc(len + 1, sizeof(char));
	if (!dup)
		return (NULL);
	ft_strlcpy(dup, s, len + 1);
	return (dup);
}

static int	split_strings(char const *s, char c, char **str_array, int splits_am)
{
	int	i;
	int	splits_i;

	i = 0;
	splits_i = 0;
	while (splits_i < splits_am)
	{
		if (s[i] == c)
		{
			str_array[splits_i] = strldup(s, i);
			if (!str_array[splits_i])
				return (0);
			splits_i++;
			s += i + 1;
			i = 0;
		}
		else
			i++;
	}
	return (1);
}

static void	free_str_array(char **str_array)
{
	int	i;

	i = 0;
	while (str_array[i] != NULL)
	{
		free(str_array[i]);
		i++;
	}
	free(str_array);
}

char	**ft_split(char const *s, char c)
{
	int		splits_am;
	char	**str_array;

	if (!s)
		return (NULL);
	splits_am = count_splits(s, c);
	str_array = (char **)ft_calloc(splits_am + 1, sizeof(char *));
	if (!str_array)
		return (NULL);
	if (!split_strings(s, c, str_array, splits_am))
	{
		free_str_array(str_array);
		return (NULL);
	}
	return (str_array);
}
