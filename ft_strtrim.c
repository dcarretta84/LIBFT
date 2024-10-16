/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 10:38:48 by dacarret          #+#    #+#             */
/*   Updated: 2024/10/15 11:04:26 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_checker(char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*res;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	while (s1[start] && ft_checker(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_checker(s1[end - 1], set))
		end--;
	res = (char *)malloc((end - start) + 1 * sizeof(char));
	if (res == NULL)
		return (NULL);
	ft_memcpy(res, &s1[start], end - start);
	res[end - start] = '\0';
	return (res);
}
/*int	main()
{
	char	*s1 = " .+ciao a tutti!!!=";
	char	*set = " +.=!";
	char	*res = ft_strtrim(s1, set);
	return (0);
}*/
