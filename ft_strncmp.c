/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 16:56:11 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/03 18:39:47 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <stdio.h>
//#include <string.h>

#include "libft.h"

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	c;

	c = 0;
	while ((s1[c] || s2[c]) && c < n)
	{
		if (s1[c] != s2[c])
			return ((unsigned char)s1[c] - (unsigned char)s2[c]);
		c++;
	}
	return (0);
}

//int main()
//{
//    char *s1;
//    char *s2;
//    char *s3;
//    unsigned int a;
//    int n;
//    int test_n;
//
//    s1 = "lopa";
//    s2 = "lasanha";
//    s3 = "nomnom";
//    a = 1;
//    
//    n = strncmp(s1, s2, a);
//    test_n = ft_strncmp(s1, s2, a);
//    printf("Expected: %d\nGot: %d\n\n", n, test_n);
//
//    n = strncmp(s1, s3, a);
//    test_n = ft_strncmp(s1, s3, a);
//    printf("Expected: %d\nGot: %d\n", n, test_n);
//}
