/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   putstrf.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 15:44:44 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/28 16:20:22 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	putstrf(t_flags *flags, char *str)
{
	if (flags -> width > 0)
		return (putstr_width(flags -> width, str, flags -> minus));
	return (0);
}