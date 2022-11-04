/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/27 22:22:59 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 13:21:36 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//funcao que torna tudo maiusculo
//#include <string.h>
//#include <stdio.h>

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c -= 32;
	return (c);
}

//int main()
//{
//    printf("%c\n", ft_toupper(120));
//    printf("%c\n", ft_toupper('s'));
//    printf("%c\n", ft_toupper('A'));
//}
