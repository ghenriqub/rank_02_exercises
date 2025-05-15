/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/15 12:43:14 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/15 13:07:25 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOD_FILL_H
# define FLOOD_FILL_H

# include <stdio.h>
# include <string.h>
# include <stdlib.h>

typedef struct	s_point
{
	int			x;
	int			y;
}				t_point;

void	flood_fill(char **tab, t_point size, t_point begin);
char	**make_area(char **zone);

#endif
