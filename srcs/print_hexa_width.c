/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_width.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:19:10 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/08 01:23:25 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_width(t_flags *flags, long number, char x, char pref)
{
	int	count;
	int	len;

	count = 0;
	len = ptr_len(number);
	if (flags -> precision - 1 > len)
		len = flags -> precision - 1;
	if (number == 0 && flags -> precision == 1)
		len = 0;
	while (count < flags -> width - len)
		count += ft_putchar(pref);
	count += print_hexa_prec(flags -> precision - 1, number, x);
	return (count);
}
