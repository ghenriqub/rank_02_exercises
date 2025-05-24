/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ghenriqu <ghenriqu@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/13 12:18:04 by ghenriqu          #+#    #+#             */
/*   Updated: 2025/05/24 18:02:00 by ghenriqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	i = 7;

	while (i >= 0)
	{
		if (octet >> i & 1)
			write (1, "1", 1);
		else
			write (1, "0", 1);
		i--;
	}
}

int main()
{
	//unsigned char octet = 42;
	unsigned char octet = 42;

	print_bits(octet);
	write (1, "\n", 1);
}