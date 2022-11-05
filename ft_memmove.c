/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:51:57 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/05 14:04:35 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*desti;
	char	*srci;

	desti = (char *)dest;
	srci = (char *)src;
	if (dest == src)
		return (dest);
	if (srci < desti)
	{
		while (n--)
			*(desti + n) = *(srci + n);
		return (dest);
	}
	while (n--)
		*desti++ = *srci++;
	return (dest);
}
