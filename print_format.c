/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:27:59 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/04 21:39:57 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(t_flags *flags, char *str, int *pos, va_list args)
{
	int	count;

	count = 0;
	if (str[*pos] == 'c')
		count += putcharf(flags, va_arg(args, int));
	if (str[*pos] == 's')
		count += putstrf(flags, va_arg(args, char *));
	if (str[*pos] == 'p')
		count += print_ptr(flags, va_arg(args, size_t));
	if (str[*pos] == 'd' || str[*pos] == 'i')
		count += print_decimal(flags, va_arg(args, int));
	if (str[*pos] == 'u')
		count += print_decimal(flags, va_arg(args, unsigned int));
	if (str[*pos] == 'x' || str[*pos] == 'X')
		count += print_hexa(flags, va_arg(args, unsigned int), char[*pos]);
	(*pos)++;
	return (count);
}
