/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   numlen.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/01 13:36:03 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/01 13:37:58 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	numlen(unsigned int number)
{
	int	len;

	len = 0;
	if (number < 10)
	{
		len++;
		return (len);
	}
	len += numlen(number / 10);
	len += numlen(number % 10);
	return (len);
}
