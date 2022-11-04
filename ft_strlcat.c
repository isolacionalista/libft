/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 14:53:07 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 13:54:30 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

#include "libft.h"

size_t	ft_strlcat(char *dest, char *source, size_t size)
{
	size_t	c;
	size_t	d;
	size_t	size_dest;
	size_t	size_source;

	size_dest = ft_strlen(dest);
	size_source = ft_strlen(source);
	c = 0;
	d = size_dest;
	if (size_dest < size - 1 && size > 0)
	{
		while (source[c] && size_dest + c < size - 1)
		{
			dest[d] = source[c];
			d++;
			c++;
		}
		dest[d] = 0;
	}
	if (size_dest >= size)
		size_dest = size;
	return (size_dest + size_source);
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
