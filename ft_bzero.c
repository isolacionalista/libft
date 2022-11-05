/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 15:46:43 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/05 16:15:15 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char	*zero;
	size_t	i;

	zero = (char *)s;
	i = 0;
	while (i < n)
	{
		zero[i] = 0;
		i++;
	}
	zero = s;
}
