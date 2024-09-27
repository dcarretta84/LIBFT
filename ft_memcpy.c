/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 09:48:52 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/27 14:52:51 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			x;
	unsigned char	*s;
	unsigned char	*d;

	x = 0;
	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	if (!dest && !src)
		return (NULL);
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (dest);
}
/*int	main(void)
{
	char src[] = "";
	ft_memcpy(src + 5, src, 5);
	printf("%s\n", src);
	return (0);
}*/
