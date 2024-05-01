/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:36:03 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/01 14:45:05 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	numlen(long number)
{
	int	len;

	len = 1;
	if (number < 0)
	{
		len++;
		number = -number;
	}
	while (number > 9)
	{
		len++;
		number /= 10;
	}
	return (len);
}
