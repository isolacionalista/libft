/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 17:51:57 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 18:16:18 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*desti;
	char	*temp;
	char	*srci;

	if (!src && !dest)
		return (0);
	if (dest == src)
		return (dest);
	desti = (char *)dest;
	srci = (char *)src;
	while (n--)
	{
		desti[n] = temp[n];
		srci[n] = temp[n];
	}
	return (dest);
}
