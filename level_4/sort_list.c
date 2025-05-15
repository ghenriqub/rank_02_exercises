/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 19:42:33 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/15 20:03:06 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*start;
	int		tmp;
	int		sorted;

	start = lst;
	if (!lst || !lst->next)
		return (lst);
	while (!sorted)
	{
		sorted = 1;
		lst = start;
		while (lst->next)
		{
			if (!cmp(lst->data, lst->next->data))
			{
				tmp = lst->data;
				lst->data = lst->next->data;
				lst->next->data = tmp;
				start = 0;
			}
			lst = lst->next;
		}
	}
	return (start);
}
