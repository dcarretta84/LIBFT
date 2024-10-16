/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:51:37 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/26 16:33:15 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strchr(const char *str, int c)
{
	int	x;
	int	y;

	y = 0;
	x = ft_strlen(str);
	c = (unsigned char) c;
	while (y <= x)
	{
		if (str[y] == c)
			return ((char *) str + y);
		y++;
	}
	return (NULL);
}
/*int	main(void)
{
	char str[] = "tutti coloro che programmano";
	char car = 'a';
	char *q = ft_strchr(str, car);
	return (0);
}*/
