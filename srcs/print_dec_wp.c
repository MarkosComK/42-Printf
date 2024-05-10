/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec_wp.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 15:39:56 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/09 10:55:43 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_dec_wp(long number, int width, int prec, char sign)
{
	int	count;
	int	len;

	count = 0;
	if (number < 0)
	{
		len = numlen(number);
		if (prec > len)
			len = prec;
		while (count < width - len - 1)
			count += ft_putchar(' ');
		return (count += print_decimal_prec(number, prec, sign));
	}
	if (sign == '+' || sign == ' ')
		return (print_dec_wp2(number, width, prec, sign));
	len = numlen(number);
	if (number == 0)
		len = 0;
	if (prec > len)
		len = prec;
	while (count < width - len)
		count += ft_putchar(' ');
	return (count + print_decimal_prec(number, prec, sign));
}
