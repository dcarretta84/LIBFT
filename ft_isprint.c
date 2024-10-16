/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:54:04 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/20 13:03:36 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	int		res;
	char	x;
	char	y;
	char	z;

	x = 32;
	y = 126;
	z = 46;
	res = ft_isprint(x);
	printf("%c: %d\n", x, res);
	res = ft_isprint(y);
	printf("%c: %d\n", y, res);
	res = ft_isprint(z);
	printf("%c: %d\n", z, res);
	return (0);
}*/
