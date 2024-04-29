/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 11:58:57 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/29 12:20:13 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr_hex(int number, char x)
{
	int	printed;

	printed = 0;
	if (number < 16)
	{
		if (x == 'x')
			return (printed += ft_putchar("0123456789abcdef"[number]));
		else if (x == 'X')
			return (printed += ft_putchar("0123456789ABCDEF"[number]));
		return (printed);
	}
	printed += print_hex(number / 16, x);
	printed += print_hex(number % 16, x);
}
