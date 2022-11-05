/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 14:15:59 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/05 14:40:58 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//The memchr() function scans the initial n bytes of the memory 
//area pointed to by s for the first instance of c.
//Both c and the bytes of the memory area pointed to by s 
//are interpreted as unsigned char.
//string.h
#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char	*s1;
	size_t		i;

	s1 = (const char *)s;
	i = 0;
	while (i < n)
	{
		if (s1[i] == c)
			return ((void *)(s + i));
		i++;
	}
	return (0);
}
