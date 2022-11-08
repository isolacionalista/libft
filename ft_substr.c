/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 16:11:05 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/08 14:00:40 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	n;
	size_t	ns;

	str = (char *)malloc((*s) + (len + 1));
	if (!str)
		return (0);
	ns = 0;
	n = 0;
	while (s[n])
	{
		if (n >= start && ns < len)
		{
			str[ns] = s[n];
			ns++;
		}
		n++;
	}
	str[ns] = 0;
	return (str);
}
