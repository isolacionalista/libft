/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 15:28:23 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/03 18:39:57 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <string.h>
//#include <stdio.h>

#include "libft.h"

char	*ft_strnstr(const char *str, const char *str2, int lenght)
{
	int	a;
	int	b;

	a = 0;
	b = 0;
	if (!str)
		return ((char *)str);
	while (str[a] != '\0' && a < lenght)
	{
		while (str[a + b] == str2[b]
			&& str[a + b] != '\0')
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