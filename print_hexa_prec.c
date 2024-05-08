/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_prec.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:27:48 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/08 01:05:21 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_prec(int prec, long number, char x)
{
	int	count;

	if (number == 0 && prec == 0)
		return (0);
	count = ptr_len(number);
	while (count < prec)
		count += ft_putchar('0');
	print_ptr_hex(number, x);
	return (count);
}
