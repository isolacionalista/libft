/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:56:22 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 13:32:39 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//teste se e printable
//#include <ctype.h>

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c < 127)
		return (1);
	return (0);
}
