/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 12:14:10 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/03 18:38:43 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//funcao que ve se tem digitos
//#include <ctype.h>
//#include <stdio.h>

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

//int main()
//{
//    int c;
//
//    c = 49;
//    ft_isdigit(c);
//    isdigit(c);
//}
