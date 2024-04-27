/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:16:13 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/27 22:23:53 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

typedef	struct
{
	int	minus;
	int	plus;
	int	space;
	int	hash;
	int	zero;
	int	width;
	int	prec;
}

int	ft_printf(char *format, ...);

#endif
