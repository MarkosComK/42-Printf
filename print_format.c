/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_format.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 13:27:59 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/28 13:44:28 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	print_format(t_flags *flags, char *str, int *pos, va_list args)
{
	int	count;

	count = 0;
	if (str[*pos] == 'c')
		count += putcharf(flags, va_arg(args, int));
	(*pos)++;
	return (count);
}
