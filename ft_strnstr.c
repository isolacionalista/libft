/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:28:23 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/16 11:51:29 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str2, size_t lenght)
{
	size_t	a;
	size_t	b;

	if (!str || !str2)
		return ((char *)str);
	else if (!str2)
		return ((char *)str2);
	a = 0;
	while (str[a] && a < lenght)
	{
		b = 0;
		while (str[a + b] == str2[b]
			&& a + b < lenght && str[a + b] && str2[b])
			b++;
		if (!str2[b])
			return ((char *)str + a);
		a++;
	}
	return (0);
}

//int main()
//{
//    char str[] = "";
//    char str2[] = "dia";
//    char *test;
//
//    test = ft_strnstr(str, str2, 8);
//    printf("veri noice. result: %s\n", test);
//}