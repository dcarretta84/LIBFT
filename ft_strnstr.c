/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 11:02:47 by dacarret          #+#    #+#             */
/*   Updated: 2024/10/11 11:43:26 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	len_little;

	i = 0;
	if (big[i] == '\0' && little[i] != '\0')
		return (NULL);
	else if (little[i] == '\0')
		return ((char *)big);
	len_little = ft_strlen(little);
	while (big && i + len_little <= len)
	{
		if (big[i] == little[0])
		{
			if (ft_strncmp(big + i, little, len_little) == 0)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
