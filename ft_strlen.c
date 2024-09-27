/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:11:46 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/20 13:23:11 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*#include <stdio.h>*/

size_t	ft_strlen(const char *s)
{
	int	x;

	x = 0;
	while (s[x] != '\0')
		x++;
	return (x);
}

/*int	main(int argc, char **argv)
{
	size_t	res;
	res = ft_strlen(argv[1]);
	printf("%s: %u\n", argv[1], res);
	return  (0);
}*/
