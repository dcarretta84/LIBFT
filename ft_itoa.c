/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dacarret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/11 10:12:22 by dacarret          #+#    #+#             */
/*   Updated: 2024/10/11 10:30:28 by dacarret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	ft_check(int n)
{
	size_t	count;

	count = 0;
	if (n == 0 || n < 0)
		count++;
	while (n != 0)
	{
		n = n / 10;
		count++;
	}
	return (count);
}

char	*ft_itoa(int n)
{
	size_t		count;
	long		nb;
	char		*res;

	nb = n;
	count = ft_check(n);
	res = (char *)malloc((count + 1) * sizeof(char));
	if (res == NULL)
		return (NULL);
	res[count--] = '\0';
	if (nb == 0)
		res[count] = '0';
	else if (nb < 0)
	{
		res[0] = '-';
		nb = nb * (-1);
	}
	while (nb != 0)
	{
		res[count] = (nb % 10) + '0';
		nb = nb / 10;
		count--;
	}
	return (res);
}
/*int	main()
{
	int numb = -2147483648;
	char	*p = ft_itoa(numb);
	return (0);

}*/
