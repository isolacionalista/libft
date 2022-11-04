/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 18:32:32 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 13:21:04 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//funcao que torna as letras para minusculas
//se ja forem, fica igual
//#include <ctype.h>
//#include <stdio.h>

#include "libft.h"

int	ft_tolower(int c)
{
	while (c != '\0')
	{
		if (c >= 'A' && c <= 'Z')
		c += 32;
		return (c);
	}
	return (0);
}

//int main()
//{
//    printf("%c\n", ft_tolower(68));
//    printf("%c\n", ft_tolower(' '));
//    printf("%c\n", ft_tolower('A'));
//}
