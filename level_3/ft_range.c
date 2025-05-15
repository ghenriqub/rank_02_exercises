/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/14 11:04:33 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/14 11:22:25 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	i = -1, len = (start > end) ? (start - end + 1) : (end - start + 1);
	int	*range = malloc(sizeof(int) * len);

	while (++i < len)
		range[i] = (start < end) ? start++ : start--;
	return (range);
}

// #include <stdio.h>

// int	main(int argc, char **argv)
// {
// 	int	*arr = ft_range(atoi(argv[1]), atoi(argv[2]));

// 	while (*arr)
// 	{
// 		printf("%d", *arr);
// 		arr++;
// 	}
// }
