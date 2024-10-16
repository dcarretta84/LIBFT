/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:35:08 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/27 12:16:18 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int		x;
	char	*p;

	x = ft_strlen(str);
	c = (unsigned char) c;
	while (x >= 0)
	{
		if (str[x] == c)
		{
			p = (char *) str + x;
			return (p);
		}
		x--;
	}
	return (NULL);
}
/*int   main(void)
{
        char str[] = "teste";
        char car = 'e';
        char *q = ft_strrchr(str, car);
        return (0);
}*/
