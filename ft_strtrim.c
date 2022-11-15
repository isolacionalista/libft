/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 14:02:40 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/15 11:47:10 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//never forget to define helper functions as static

#include "libft.h"

static int	char_search(char c, char const *set)
{
	size_t	a;

	a = 0;
	while (set[a])
	{
		if (set[a] == c)
			return (1);
		a++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim_str;
	size_t	strt;
	size_t	end;
	size_t	i;

	strt = 0;
	while (s1[strt] && char_search(s1[strt], set))
		strt++;
	end = ft_strlen(s1);
	while (end > strt && char_search(s1[end - 1], set))
		end--;
	trim_str = malloc(sizeof(s1) * (end - strt + 1));
	if (!trim_str)
		return (0);
	i = 0;
	while (end > strt)
		trim_str[i++] = s1[strt++];
	trim_str[i] = 0;
	return (trim_str);
}

//#include <stdio.h>
//
//
//int main()
//{
//	char s1[] = "ola eu sou isto";
//	char set[] = "";
//
//	printf("%s", ft_strtrim(s1, set));
//}