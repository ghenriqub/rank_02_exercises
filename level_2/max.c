/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:07:38 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/16 08:36:35 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int	i = 0, result = 0;

	if (len == 0)
		return (0);
	result = tab[0];
	while (len > i)
	{
		if (tab[i] > result)
			result = tab[i];
		i++;
	}
	return (result);
}
