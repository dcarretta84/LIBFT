/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:11:08 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/27 14:56:24 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*s;
	unsigned char	*d;
	size_t			x;

	s = (unsigned char *)src;
	d = (unsigned char *)dest;
	x = 0;
	if (!dest && !src)
		return (NULL);
	else if (dest == src)
		return (dest);
	else if (d > s && d < s + n)
	{
		d = d + n;
		s = s + n;
		while (n--)
			*(--d) = *(--s);
	}
	else
	{
		while (n--)
			*d++ = *s++;
	}
	return (dest);
}
/*int	main(void)
{
	char src[] = "Hello, World";
	ft_memmove(src + 5, src, 2);
	printf("%s\n", src);
	return (0);
}*/
