/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:07:51 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/28 17:02:06 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putstr_width(int width, char *str, int align_left)
{
	int		string_len;
	int		printed_len;

	if (str == NULL)
		str = "(null)";
	string_len = (int)ft_strlen(str);
	printed_len = 0;
	if (string_len >= width)
		return(ft_putstr(str));
	if (align_left == TRUE)
	{
		printed_len += ft_putstr(str);
		while (printed_len < width)
			printed_len += ft_putchar(' ');
		return (printed_len);
	}
	while (printed_len < width - string_len)
		printed_len += ft_putchar(' ');
	printed_len += ft_putstr(str);
	return (printed_len);
}
