/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_unsigned_dec.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 12:14:04 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/01 12:18:28 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_unsigned_dec(unsigned int number)
{
	int	count;

	count = 0;
	if (number < 10)
	{
		ft_putchar(number + 48);
		return ;
	}
	print_unsigned_dec(number / 10);
	print_unsigned_dec(number % 10);
	return (0);
}
