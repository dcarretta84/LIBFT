/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 11:31:44 by dacarret          #+#    #+#             */
/*   Updated: 2024/10/15 13:34:04 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_nbr_words(char const *s, char c)
{
	size_t	i;
	size_t	flag;
	size_t	count;

	i = 0;
	count = 0;
	flag = 0;
	while (s[i])
	{
		if (c != s[i] && flag == 0)
		{
			count++;
			flag = 1;
		}
		if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static size_t	ft_len(char *s, char c)
{
	size_t	count;
	char	*start;

	count = 0;
	start = s;
	while (*start == c)
		start++;
	while (*start != c && *start != '\0')
	{
		start++;
		count++;
	}
	return (count);
}

static char	*ft_cpy(char *dst, char *src, char c)
{
	char	*start;

	start = src;
	while (*start == c)
		start++;
	while (*start != c && *start != '\0')
	{
		*dst = *start;
		dst++;
		start++;
	}
	*dst = '\0';
	return (start);
}

static char	**ft_cleaner(char **res, size_t i)
{
	while (i > 0)
	{
		i--;
		free(res[i]);
	}
	free(res);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	char	*start;
	size_t	i;
	size_t	words;

	i = 0;
	start = (char *) s;
	words = ft_nbr_words(s, c);
	if (!s)
		return (NULL);
	res = (char **)malloc((words + 1) * sizeof(char *));
	if (res == NULL)
		return (NULL);
	while (i < words)
	{
		res[i] = (char *)malloc((ft_len(start, c) + 1) * sizeof(char));
		if (res[i] == NULL)
		{
			return (ft_cleaner(res, i));
		}
		start = ft_cpy(res[i], start, c);
		i++;
	}
	res[ft_nbr_words(s, c)] = NULL;
	return (res);
}
/*int	main()
{
	char	*s = "^^^1^^2a,^^^^3^^^^--h^^^^";
	char	c = '^';
	char	**res = ft_split("^^^1^^2a,^^^^3^^^^--h^^^^", 94:'^');
	return (0);
}*/
