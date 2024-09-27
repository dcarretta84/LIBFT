/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:49:25 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/26 14:10:52 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	len_d;
	size_t	len_s;
	size_t	tot_len;
	size_t	s;

	len_d = 0;
	len_s = 0;
	s = 0;
	while (dst[len_d] != '\0')
		len_d++;
	while (src[len_s] != '\0')
		len_s++;
	tot_len = len_d + len_s;
	if (size <= len_d)
		return (size + len_s);
	while (src[s] != '\0' && (len_d + s) < (size - 1))
	{
		dst[len_d + s] = src[s];
		s++;
	}
	dst[len_d + s] = '\0';
	return (tot_len);
}
/*int	main(void)
{
	char dst[10] = "ciao";
	char *src = ", mondo!";
	size_t x = ft_strlcat(dst, src, sizeof(dst));
	printf("%s\n", dst);
	printf("%zu\n", x);
	return (0);
}*/
