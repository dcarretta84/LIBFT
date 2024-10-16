/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:15:51 by dacarret          #+#    #+#             */
/*   Updated: 2024/10/11 13:31:16 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*static char	*ft_change(unsigned int i, char c)
{
	if (i % 2 == 0)
		c = '0';
	return (c);
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t	i;
	size_t	len;
	char	*p;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s);
	p = (char *)malloc((len + 1) * sizeof(char));
	if (p == NULL)
		return (NULL);
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
/*int	main(void)
{
	char	*string = "ciao a tutti vado al bar";
	char	*res = ft_strmapi(string, ft_change);
	return (0);
}*/
