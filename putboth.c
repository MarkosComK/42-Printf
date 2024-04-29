/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putboth.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 21:08:57 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/29 14:16:22 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putboth(int width, int precision, char *str, int align_left)
{
	int	string_len;
	int	count;

	count = 0;
	if (str == NULL)
	{
		str = "(null)";
		if (precision < 6)
			precision = 0;
	}
	string_len = (int)ft_strlen(str);
	if (precision < string_len)
		string_len = precision;
	if (string_len >= width)
		return (putstr_precision(precision, str));
	if (align_left)
	{
		count += putstr_precision(precision, str);
		while (count < width)
			count += ft_putchar(' ');
		return (count);
	}
	while (count < width - string_len)
		count += ft_putchar(' ');
	return (count + putstr_precision(precision, str));
}
