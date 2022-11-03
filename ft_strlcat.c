/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:53:07 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/03 18:39:21 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

#include "libft.h"

unsigned int	ft_strlcat(char *destino, char *source, unsigned int size)
{
	unsigned int	c;
	unsigned int	d;
	unsigned int	e;

	c = 0;
	d = 0;
	e = 0;
	while (destino[c])
		c++;
	while (destino[d])
		d++;
	if (c >= size)
		return (d + size);
	while (source[e] && (c + d) < (size - 1))
	{
		destino[c + e] = source[e];
		e++;
	}
	destino[c + d] = '\0';
	return (d + c);
}

//int main()
//{
//    char *dest;
//    char *source;
//    int lenght;
//    unsigned int final;
//
//    source = "um dois tres";
//    dest = "macaquinho do chines";
//    lenght = 8;
//    final = ft_strlcat(dest, source, lenght);
//    printf("Source: %s\nDestination: %s\n", source, dest);
//    printf("Lenght to add: %d\nFinal lenght: %d\n", lenght, final);
//}
