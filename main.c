/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jemustaj <jemustaj@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 20:20:45 by jemustaj          #+#    #+#             */
/*   Updated: 2024/11/18 22:39:58 by jemustaj         ###   ########.fr       */
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
	size_t size1 = 8;

	printf("Size of dst = src: %zu\n", ft_strlcat(dest1, src1, size1));

	write(1, "\nFT_STRCHR\n", 11);
	const char	s[] = "Hey Jude";
	int	c = 121;
	printf("%s\n", ft_strchr(s, c));

	write(1, "\nFT_STRRCHR\n", 12);
	const char	s1[] = "Banana";
	int	c1 = 110;
	printf("%s\n", ft_strrchr(s1, c1));

	write(1, "\nFT_STRNCMP\n", 12);
	const char	s2[] = "Big Tree";
	const char	s3[] = "In My Garden";
	size_t	n = 5;
	printf("%d\n", ft_strncmp(s2, s3, n));

	write(1, "\nFT_STRNSTR\n", 12);
	const char	s4[] = "There is a big tree in my garden";
	const char	s5[] = "is a big";
	size_t	len = 18;
	printf("%s\n", ft_strnstr(s4, s5, len));

	write (1, "\nFT_MEMCPY\n", 11);
	char	dest2[10];
	const char	src2[] = "Aproveita";

	printf("Copy all: %s\n", (unsigned char *)ft_memcpy(dest2, src2, 9));
	printf("NULL src: %s\n", (unsigned char *)ft_memcpy(dest2, NULL, 9));
	printf("NULL dest: %s\n", (unsigned char *)ft_memcpy(NULL, src2, 9));
	
	write (1, "\nFT_MEMMOVE\n", 12);
	char	dest3[7] = "123456";
	char	src3[] = "abcdefg";
	char	test_d[] = "123456";
	char	test_s[] = "abcdefg";
	
	printf("%s\n", (unsigned char *)ft_memmove(dest3, src3, 3));
	printf("%s\n", (unsigned char *)ft_memmove(test_d + 2, test_s, 5));

	write (1, "\nFT_MEMSET\n", 11);
	char	arr[6] = "12345";
	int	m = 3;

	printf("%s\n", (unsigned char *)ft_memset(arr, m, 3));
	printf("%s\n", (unsigned char *)memset(arr, m, 3));

	write (1, "\nFT_BZERO\n", 10);
	char	str[] = "Nukkumaan";
	char	str1[] = "Nukkumaan";

	ft_bzero(str, 1);
	printf("%zu\n", str);
	bzero(str1, 1);
	printf("%zu\n", str1);
	return (0);
}
