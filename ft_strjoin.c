/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 15:32:21 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/07 15:55:14 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	a;
	size_t	b;

	str = (char *)malloc(sizeof(s1) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!str)
		return (0);
	a = 0;
	b = 0;
	while (s1[a])
	{
		str[b++] = s1[a];
		a++;
	}
	a = 0;
	while (s2[a])
	{
		str[b++] = s2[a];
		a++;
	}
	str[b] = 0;
	return (str);
}
