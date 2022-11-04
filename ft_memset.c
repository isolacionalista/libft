/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 16:12:03 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 17:00:30 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			a;
	unsigned char	*mem;

	a = 0;
	mem = (unsigned char *)s;
	while (a < n)
	{
		mem[a] = c;
		a++;
	}
	return (s = mem);
}
