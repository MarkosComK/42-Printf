/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_hexa_left.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/05 11:22:36 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/08 01:52:36 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_hexa_left(t_flags *flags, long number, char x)
{
	int	count;

	count = 0;
	if (flags -> hash)
	{
		if (number != 0)
			count += ft_putchar('0') + ft_putchar(x);
	}
	count += print_hexa_prec(flags -> precision - 1, number, x);
	while (count < flags -> width)
		count += ft_putchar(' ');
	return (count);
}
