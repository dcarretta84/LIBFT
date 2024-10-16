/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 14:55:58 by dacarret          #+#    #+#             */
/*   Updated: 2024/10/09 15:04:22 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	x;
	size_t	i;
	size_t	len_tot;
	char	*res;

	i = 0;
	x = 0;
	if (!s1 && !s2)
		return (NULL);
	len_tot = ft_strlen(s1) + ft_strlen(s2);
	res = (char *)malloc((len_tot + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	while (s1[i] != '\0')
	{
		res[i] = s1[i];
		i++;
	}
	while (s2[x] != '\0')
	{
		res[i + x] = s2[x];
		x++;
	}
	res[i + x] = '\0';
	return (res);
}
