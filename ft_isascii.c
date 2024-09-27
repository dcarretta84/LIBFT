/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:30:53 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/20 12:49:11 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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

	x = ' ';
	y = '~';
	z = 31;
	res = ft_isascii(x);
	printf("%d\n", res);
	res = ft_isascii(y);
	printf("%d\n", res);
	res = ft_isascii(z);
	printf("%d\n", res);
	return (0);
}*/
