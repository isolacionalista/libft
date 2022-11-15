/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imendonc <imendonc@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 12:53:11 by imendonc          #+#    #+#             */
/*   Updated: 2022/11/15 13:15:55 by imendonc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*cont;

	cont = ft_lstlast(*lst);
	if (!lst || !new)
		return ;
	if (*lst == 0)
	{
		*lst = new;
		return ;
	}
	cont->next = new;
}
