/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 17:34:58 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/05 18:03:12 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*rturn;
	size_t	lenght;

	lenght = ft_strlen(s) + 1;
	rturn = malloc(sizeof(char) * lenght);
	if (!rturn)
		return (0);
	rturn = ft_memcpy(rturn, s, lenght);
	return (rturn);
}
