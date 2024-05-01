/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_decimal_prec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:38:31 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/01 13:27:49 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int numlen(unsigned int number);

int	print_decimal_prec(unsigned int number, int prec, char sign)
{
	int	count;
	int	len;

	count = 0;
	len = numlen(number);
	if (number == 0 && prec == 0)
		return (0);
	if (sign == '+' || sign == ' ')
		count += ft_putchar(sign);
	while (count < prec - len)
		count += ft_putchar('0');
	return (count += print_unsigned_dec(number));
}

int	numlen(unsigned int number)
{
	int	len;

	len = 0;
	if (number < 10)
	{
		len++;
		return (len);
	}
	len += numlen(number / 10);
	len += numlen(number % 10);
	return (len);
}
