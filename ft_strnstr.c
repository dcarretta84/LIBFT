/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 15:00:08 by dacarret          #+#    #+#             */
/*   Updated: 2024/09/27 15:23:07 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <string.h>
#include <stdio.h>
char	*strnstr(const char *big, const char *little, size_t len)
{

}

int	main(void)
{
	const char	big = "tutto il mondo piange in aramaico";
	const char	little = "in";
	char	*dev = ft_strnstr(big, little, strlen(big));
	printf("%s\n", dev);
	return (0);
}
