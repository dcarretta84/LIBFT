/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:25:29 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/26 10:13:57 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			x;
	unsigned char	*p;

	x = 0;
	p = (unsigned char *)s;
	while (x < n)
	{
		p[x] = c;
		x++;
	}
	return (s);
}
/*int	main(void)
{
	char string[] = "CIAO BELLI E BRUTTI";
	char c = 'a';
	size_t n = 10;

	printf("%s\n", string);
	ft_memset(string, c, n);
	printf("%s", string);
	return (0);
}*/	
