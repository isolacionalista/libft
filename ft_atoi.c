/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 17:31:46 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/04 15:54:09 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

#include "libft.h"

static int	espacosbrancos(char *string, int *a)
{
	int	contador;
	int	b;

	contador = 1;
	b = 0;
	while ((string[b] >= 9 && string[b] <= 13) || (string[b] == 32))
		b++;
	if (string[b] == 45)
	{
		contador *= -1;
		b++;
	}
	else if (string[b] == 43)
		b++;
	*a = b;
	return (contador);
}

int	ft_atoi(char *string)
{
	int	sinal;
	int	resultado;
	int	b;

	resultado = 0;
	sinal = espacosbrancos(string, &b);
	while (string[b] && string[b] >= 48 && string[b] <= 57)
	{
		resultado *= 10;
		resultado += string[b] - 48;
		b++;
	}
	return (resultado * sinal);
}
