/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ptr_len.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 13:05:55 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/29 13:20:27 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ptr_len(int number)
{
	int	i;

	i = 0;
	if (number < 16)
		return (i += 1);
	i += ptr_len(number / 16);
	i += ptr_len(number % 16);
	return (i);
}
