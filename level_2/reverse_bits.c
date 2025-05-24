/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:23:21 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/24 18:23:35 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	int	i = 7;
	unsigned char	result;

	while (i > 0)
	{
		result = (result << 1) | (octet & 1);
		octet >>= 1;
		i--;
	}
	return (result);
}

int	main(void)
{
	unsigned char bit = 0;
	unsigned char res = reverse_bits((unsigned char)42);

	int i = 8;
	while (i--)
	{
		bit = (res >> i & 1) + 48;
		printf("%c", bit);
	}
}