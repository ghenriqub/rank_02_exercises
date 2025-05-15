/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:18:04 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/13 12:22:07 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 8;
	unsigned char	bit = 0;
	
	while (i--)
	{
		bit = (octet >> i & 1) + 48;
		write (1, &bit, 1);
	}
}

int main()
{
	unsigned char octet = 42;

	print_bits(octet);
	write (1, "\n", 1);
}