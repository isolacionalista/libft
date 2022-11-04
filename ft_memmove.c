/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:51:57 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 18:30:31 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*desti;
	char	*srci;

	desti = (char *)dest;
	srci = (char *)src;
	if (desti < srci)
		desti[n] = srci[n];
	else
		ft_memcpy(desti, srci, n);
	return (dest);
}
