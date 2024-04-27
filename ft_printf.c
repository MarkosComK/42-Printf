/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:49:01 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/09 02:27:47 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf(const char *str, ...)
{
	va_list	args;
	t_flags	flags;
	int		i;
	int		count;

	if (!str || (str[0] == '%' && str[1] == '\0'))
		return (-1);
	i = 0;
	count = 0;
	va_start(args, str);
	while (str[i])
	{
		ft_bzero(&flags, sizeof(t_flags));
		if (str[i] == '%')
		{
			i++;
			while (ft_memchr("-0.# +", str[i], 6) || ft_isdigit(str[i]))
				update_struct(&flags, str, &i);
			count += print_format(&flags, str, &i, args);
		}
		else
			count += ft_putchar(str[i++]);
	}
	va_end(args);
	return (count);
}
