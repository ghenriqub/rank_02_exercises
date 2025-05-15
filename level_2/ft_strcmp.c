/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 13:55:40 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/11 14:10:26 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i = -1;
	while (s1[++i] == s2[i] && (s1[i] || s2[i]));
	return (s1[i] - s2[i]);		
}

#include <stdio.h>
int	main()
{
	char	*s1 = "abc";
	char	*s2 = "abcD";
	int		s = ft_strcmp(s1, s2);

	printf("%d\n", s);
	return (0);	
}