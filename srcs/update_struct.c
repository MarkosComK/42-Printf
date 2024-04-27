/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   update_struct.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/28 12:47:30 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/28 17:12:44 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	update_struct(t_flags *flags, const char *str, int *pos)
{
	while (str[*pos] == '-' || str[*pos] == '+'
		|| str[*pos] == ' ' || str[*pos] == '#')
	{
		if (str[*pos] == '-')
			flags -> align_left = TRUE;
		if (str[*pos] == '+')
			flags -> plus = TRUE;
		if (str[*pos] == ' ')
			flags -> space = TRUE;
		if (str[*pos] == '#')
			flags -> hash = TRUE;
		(*pos)++;
	}
	if (str[*pos] == '0')
		flags -> zero = TRUE;
	if (ft_isdigit(str[*pos]) || str[*pos] == '.')
	{
		if (str[*pos] == '.')
			flags -> precision = ft_atoi(&str[++*pos]) + 1;
		else
			flags -> width = ft_atoi(&str[*pos]);
		while (ft_isdigit(str[*pos]))
			(*pos)++;
	}
}
