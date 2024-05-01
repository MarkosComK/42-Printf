/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:30:55 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/01 12:19:19 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_decimal(t_flags *flags, int number)
{
	char	prefix;
	char	sign;

	prefix = ' ';
	sign = '-';
	if (flags -> space)
		sign = ' ';
	if (flags -> zero)
		prefix = '0';
	if (flags -> plus)
		sign = '+';
	if (flags -> align_left)
		return (print_decimal_left(number, flags->width,
				flags->precision, sign));
   return (print_unsigned_dec(number));
}
