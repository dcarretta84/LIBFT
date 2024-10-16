/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 15:21:35 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/20 16:04:45 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t			x;
	unsigned char	*p;

	x = 0;
	p = (unsigned char *)s;
	while (x < n)
	{
		p[x] = '\0';
		x++;
	}
}
/*int	main(void)
{
	size_t	n = 5;
	char	string[] = "CIAO A TUTTI BELLI E BRUTTI";
	printf("%s\n", string);
	ft_bzero(string, n);
	printf("%s\n", string);
	return (0);
}*/
