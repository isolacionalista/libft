/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:43:47 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/09 15:15:37 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//string.h

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*si1;
	const unsigned char	*si2;
	size_t				i;

	si1 = (const unsigned char *)s1;
	si2 = (const unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (si1[i] != si2[i])
			return (si1[i] - si2[i]);
		i++;
	}
	return (0);
}
