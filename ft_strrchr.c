/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 14:04:02 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/03 18:40:10 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//teste igual a strchr mas em reverse
//#include <stdio.h>
//#include <string.h>

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	a;

	a = 0;
	while (s[a])
		a++;
	while (a >= 0)
	{
		if (c == s[a])
			return ((char *)s + a);
		a--;
	}
	return (0);
}

//int main()
//{
//	char *str;
//	char *test;
//	char *original;
//
//	str = "bom dia";
//	test = ft_strrchr(str, 'i');
//	original = strrchr(str, 'i');
//
//	if (test == original)
//    {
//		printf("noice\n");
//        printf("test: %s. original; %s\n", test, original);
//    }
//	else if (test != original)
//    {
//		printf("megafail\n");
//        printf("test: %s. original: %s\n", test, original);
//    }
//	test = ft_strrchr(str, ' ');
//	original = strrchr(str, ' ');
//
//    if (test == original)
//    {
//		printf("noice\n");
//        printf("test: %s. original; %s\n", test, original);
//    }
//	else if (test != original)
//    {
//		printf("megafail\n");
//        printf("test: %s. original: %s\n", test, original);
//   
//	test = ft_strrchr(str, '9');
//	original = strrchr(str, '9');
//
//    if (test == original)
//    {
//		printf("noice\n");
//        printf("test: %s. original; %s\n", test, original);
//    }
//	else if (test != original)
//    {
//		printf("megafail\n");
//        printf("test: %s. original: %s\n", test, original);
//    }
//}
