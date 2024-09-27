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
#include <stdio.h>
char    *ft_strrchr(const char *str, int c)
{
	int     x;
	char	*p;

	x = 0;
	while (str[x] != '\0')
		x++;
	while (x >= 0)
	{
		if (str[x] == c)
		{
			p = (char)str;
			return (p);
		}
		x--;
	}
	return (NULL);
}
int   main(void)
{
        char str[] = "tutti coloro ormai";
        char car = 'a';
        char *q = ft_strrchr(str, car);
        return (0);
}
