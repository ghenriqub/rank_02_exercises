/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/10 14:50:27 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/10 15:00:00 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcpy(char *s1, char *s2)
{
	int	i = -1;

 	while (s2[++i])
 		s1[i] = s2[i];
 	s1[i] = 0;
 	return (s1);
}

int	main()
{
	char	s1[11];
	char	*s2 = "lasanhaaa!";

	printf("%s", ft_strcpy(s1, s2));
	return (0);
}
