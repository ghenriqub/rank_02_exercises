/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:23:21 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/27 13:37:04 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
	unsigned char novo = '\0';
	int bit = 7;
	int new_bit = 0;
	
	while (bit >= 0)
	{
		if (octet >> bit &1)
			novo |= 1 << new_bit;
		bit--;
		new_bit++;
	}
	return (novo);
	
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