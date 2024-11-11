/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:20:45 by jemustaj          #+#    #+#             */
/*   Updated: 2024/11/11 17:39:17 by jemustaj         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	write(1, "\nFT_ISAPLHA\n", 12);
	printf("Is alpha: %d\n", ft_isalpha(70));
	printf("Isn't alpha: %d\n", ft_isalpha(35));
	write(1, "\nFT_ISDIGIT\n", 12);
	printf("Is digit: %d\n", ft_isdigit(53));
	printf("Isn't digit: %d\n", ft_isdigit(47));
	write(1, "\nFT_ISALNUM\n", 12);
	printf("Is alnum: %d\n", ft_isalnum('F'));
	printf("Isn't alnum: %d\n", ft_isalnum(92));
	write(1, "\nFT_ISASCII\n", 12); 
	printf("Is ascii: %d\n", ft_isascii(127));
	printf("Isn't ascii: %d\n", ft_isascii(130));
	write(1, "\nFT_ISPRINT\n", 12);
	printf("Is print: %d\n", ft_isprint(49));
	printf("Isn't print: %d\n", ft_isprint(30));
	write(1, "\nFT_STRLEN\n", 12); 
	printf("String size 9: %zu\n", ft_strlen("aproveita"));
	printf("String size 0: %zu\n", ft_strlen(""));
	write(1, "\n", 1);
	write(1, "FT_STRLCPY\n", 11);
	char	dest[] = "Hell";
	char	src[] = "Well";
	size_t	size = 1;
	printf("Size of src: %zu\n", ft_strlcpy(dest, src, size));
	write(1, "\nFT_STRLCAT\n", 12);
	char	dest1[5] = "Hello";
	char src1[] = "Jude";
	size_t size1 = 4;
	printf("Size of dst = src: %zu\n", ft_strlcat(dest1, src1, size1));
	return (0);
}
