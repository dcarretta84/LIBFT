/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:18:08 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/20 12:50:02 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

int	ft_isalnum(int c)
{
	if ((c >= 0 && c <= 9) || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
/*int	main(void)
{
	int		res;
	char	x;
	char	y;

	x = 9;
	y = 'N';
	res = ft_isalnum(x);
	printf("%d\n", res);
	res = ft_isalnum(y);
	printf("%d\n", res);
	return (0);
}*/
