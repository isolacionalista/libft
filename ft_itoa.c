/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:04:32 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/09 13:27:10 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	rever(int n)
{
	if (n < 0)
		return (-n);
	return (n);
}

static void	reversor(char *s)
{
	size_t	len;
	size_t	i;
	char	tmp;

	len = ft_strlen(s);
	i = 0;
	while (i < (len / 2))
	{
		tmp = s[i];
		s[i] = s[len - i - 1];
		s[len - i - 1] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	size_t	len;

	neg = n < 0;
	str = ft_calloc(11 + neg, sizeof(str));
	len = 0;
	if (!str)
		return (0);
	if (n == 0)
		str[0] = 48;
	while (n != 0)
	{
		str[len++] = rever(n % 10) + 48;
		n = n / 10;
	}
	if (neg)
		str[len] = '-';
	reversor(str);
	return (str);
}
