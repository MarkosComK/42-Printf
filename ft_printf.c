/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:49:01 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/27 19:21:42 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(char *format, ...)
{
	va_list	args;
	int		i;

	i = 0;
	va_start(args, format);
	ft_putstr_fd(format, 1);
	va_end(args);
	return (0);
}
