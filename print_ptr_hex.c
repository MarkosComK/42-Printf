/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr_hex.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:58:57 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/08 01:46:53 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr_hex(long number, char x)
{
	int	printed;

	printed = 0;
	if (number < 0)
		number = -number;
	if (number < 16)
	{
		if (x == 'x')
			return (printed += ft_putchar("0123456789abcdef"[number]));
		else if (x == 'X')
			return (printed += ft_putchar("0123456789ABCDEF"[number]));
		return (printed);
	}
	printed += print_ptr_hex(number / 16, x);
	printed += print_ptr_hex(number % 16, x);
	return (printed);
}
