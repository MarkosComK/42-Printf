/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:16:13 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/27 19:13:06 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
#include "libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdarg.h>

int	ft_printf(char *format, ...);

#endif
