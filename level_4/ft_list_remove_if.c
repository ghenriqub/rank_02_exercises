/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 17:59:29 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/26 17:04:21 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*temp;

	while (*begin_list)
	{
		if (cmp((*begin_list)->data, data_ref) == 0)
		{
			temp = (*begin_list);
			(*begin_list) = (*begin_list)->next;
			free(temp);
		}
		else
			begin_list = &(*begin_list)->next;
	}
}
