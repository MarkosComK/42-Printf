/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstr_width.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 16:07:51 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/28 16:17:49 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putstr_width(int width, char *str, int minus)
{
	int	len;
	int	count;

	(void) minus;
	if (str == NULL)
		str = "(null)";
	len = ft_strlen(str);
	count = 0;
	if (len >= width)
		return(ft_putstr(str));
	return (0);
}
