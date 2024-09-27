/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 12:29:47 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/27 13:08:06 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/
void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;
	const unsigned char	*p;	

	x = 0;
	p = (const unsigned char *)s;
	c = (unsigned char)c;
	while (x < n)
	{
		if (p[x] == c)
			return (void *)(p + x);
		x++;
	}
	return (NULL);
}
/*int	main(void)
{
	char	*res;
	char	s[] = "ciao a tutti";
	char	c = 'w';
	res = ft_memchr(s, c, 10);
	printf("%s\n", res);
	return (0);
}*/
