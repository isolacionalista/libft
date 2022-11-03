/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 18:32:16 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/03 18:38:21 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//funcao que testa se e do alfabeto
//#include <ctype.h>
//#include <stdio.h>

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

//int main()
//{
//    int c;
//
//    c = 120;
//
//    ft_isalpha(c);
//    isalpha(c);
//}
