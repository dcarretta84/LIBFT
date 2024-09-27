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
/*#include <stdio.h>*/
char	*ft_strchr(const char *str, int c)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
		x++;
	while (y <= x)
	{
		if (str[y] == c)
			return (&str[y]);
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
