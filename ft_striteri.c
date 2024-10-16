/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 13:35:48 by dacarret          #+#    #+#             */
/*   Updated: 2024/10/11 13:40:54 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
/*static void	ft_change(unsigned int i, char *c)
{
	if (i % 2 == 0)
		*c = '0';
	return ;
}*/

void	ft_striteri(char const *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	if (!s || !f)
		return ;
	len = ft_strlen(s);
	while (i < len)
	{
		f(i, (char *)&s[i]);
		i++;
	}
	return ;
}
/*int	main(void)
{
	char	*string = "ciao a tutti vado al bar";
	char	*res = ft_striteri(string, ft_change);
	return (0);
}*/
