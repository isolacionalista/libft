/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 13:42:45 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/03 18:39:33 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include

//#include <string.h>
//#include <stdlib.h>
//#include <stdio.h>

#include "libft.h"

unsigned int	ft_strlcpy(char *dest, char *source, unsigned int len)
{
	unsigned int	a;
	unsigned int	b;

	a = 0;
	b = 0;
	while (source[a] != '\0')
	{
		a++;
		if (len != '\0')
		{
			while (source[b] != '\0' && b < (len - 1))
			{
				dest[b] = source[b];
				b++;
			}
			dest[b] = '\0';
		}
	}
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
