/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_dec_width.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 10:27:22 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/09 11:26:01 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_dec_width(long number, int width, char pref, char sign)
{
	int	len;
	int	count;

	count = 0;
	if (number < 0)
	{
		len = numlen(number);
		if (pref == '0')
			return (print_dec_wz(number, width));
		while (count < width - len - 1)
			count += ft_putchar(' ');
		return (count + ft_putnbr(number));
	}
	if (sign == '+')
		return (print_dec_width2(number, width, pref, sign));
	len = numlen(number);
	while (count < width - len)
		count += ft_putchar(pref);
	return (count + print_unsigned_dec(number));
}
