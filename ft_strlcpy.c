/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:22:05 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/26 12:17:25 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	y;
	size_t	len;

	y = 0;
	len = 0;
	while (src[len] != '\0')
		len++;
	while (dst > 0 && y < (dstsize - 1) && src[y] != '\0')
	{
		dst[y] = src[y];
		y++;
	}
	dst[y] = '\0';
	return (len);
}
/*int	main(void)
{
	char dest[0];
	char src[] = "ciaot";
	size_t x = ft_strlcpy(dest, src, 10);
	printf("%zu\n", x);
	printf("%s\n", dest);
	return (0);
}*/
