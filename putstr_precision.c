/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_precsion.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 17:18:59 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/28 17:25:30 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putstr_precision(int precision, char *str)
{
	int	total_printed;

	total_printed = 0;
	if (str == NULL)
	{
		str = "(null)";
		if (precision < 6)
			precision = 0;
	}
	while (str[total_printed] && total_printed < precision)
		total_printed += ft_putchar(str[total_printed]);
	return (total_printed);
}
