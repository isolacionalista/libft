/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:42:45 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 13:54:59 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include

//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *source, size_t len)
{
	size_t	a;

	a = 0;
	if (len > 0)
	{
		while (source[a] && a < (len - 1))
		{
			dest[a] = source[a];
			a++;
		}
		dest[a] = 0;
	}
	while (source[a])
		a++;
	return (a);
}

//int main()
//{
//    char *dest;
//    char *src;
//    int len;
//
//    src = calloc(11, sizeof(char));
//    dest = calloc(7, sizeof(char));
//    src = "bamos ber se funcemina";
//    len = ft_strlcpy(dest, src, 7);
//    printf("Source is: %s\n", src);
//    printf("Final result is: %s\n", dest);
//    printf("Lenght of source: %d\n", len);
//}
