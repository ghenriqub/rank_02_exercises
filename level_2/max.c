/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:07:38 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/13 12:16:59 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	int	i = -1, count = -1, result = 0;

	if (len > 0)
	{
		while (++count < len)
		{
			if (tab[++i] > result)
				result = tab[i];
		}
		return (result);
	}
	return (0);
}
