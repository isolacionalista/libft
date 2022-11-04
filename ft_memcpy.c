/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:28:24 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 18:16:16 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	char		*desti;
	const char	*srci;

	if ((dest == src) || n == 0)
		return (dest);
	if (!dest && !src)
		return (0);
	desti = (char *)dest;
	srci = (const char *)src;
	while (n--)
		desti[n] = srci[n];
	return (dest);
}
