/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_hash.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 01:07:31 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/08 01:14:17 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_hash(t_flags *flags, long number, char x, char pref)
{
	int	count;
	int	len;

	count = 0;
	len = ptr_len(number);
	if (flags -> precision - 1 - len)
		len = flags -> precision - 1;
	if (pref == 0)
	{
		if (number != 0)
			count += ft_putchar('0') + ft_putchar(x);
		while (count < flags -> width - len)
			count += ft_putchar(pref);
		count += print_hexa_prec(flags -> precision - 1, number, x);
		return (count);
	}
	while (count <  flags -> width - 2 - len)
		count += ft_putchar(pref);
	if (number != 0)
		count += ft_putchar('0') +  ft_putchar(x);
	count += print_hexa_prec(flags -> precision - 1, number, x);
	return (count);
}
