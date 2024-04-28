/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_ptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:42:12 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/28 22:08:03 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_ptr(t_flags *flags, int number)
{
	int	string_len;

	if (number == 0)
	{
		string_len = 5;
		if (flags -> width <= 5)
			return (ft_putstr("(nil)"));
		if (flags -> align_left)
		{
			ft_putstr("(nil)");
			while (len < flags -> width)
				len += ft_putchar(' ');
			return (len);
		}
	}
	if (flags -> width > 0)
		return (print_ptr_spaces(flags -> width, flags -> align_left, number));
	string_len += ft_putstr("0x");
	string_len += print_hex(number, 'x');
	return (string_len);
}
