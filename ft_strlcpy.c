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
#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	y;

	y = 0;
	if (size == 0)
		return (ft_strlen(src));
	else
	{
		while (src[y] && (y < size -1))
		{
			dst[y] = src[y];
			y++;
		}
		dst[y] = '\0';
	}
	while (src[y])
		y++;
	return (y);
}
/*int	main(void)
{
	char dest[10];
	char src[] = "ciaot";
	size_t x = ft_strlcpy(dest, src, 10);
	printf("%zu\n", x);
	printf("%s\n", dest);
	return (0);
}*/
