/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 10:45:37 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/23 19:42:28 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"


int	ft_list_size(t_list *begin_list)
{
	int	i = 0;

	while (begin_list)
	{
		begin_list = begin_list->next;
		i++;
	}
	return (i);
}