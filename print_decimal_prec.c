/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal_prec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:38:31 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/08 00:15:43 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_decimal_prec(long number, int prec, char sign)
{
	int	count;
	int	len;

	count = 0;
	len = numlen(number);
	if (number == 0 && prec == 0)
		return (0);
	if (number < 0)
		return (print_dec_wz(number, prec + 1));
	if (sign == '+' || sign == ' ')
		count += ft_putchar(sign);
	while (count < prec - len + 1)
		count += ft_putchar('0');
	return (count + print_unsigned_dec(number));
}
