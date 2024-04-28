/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:16:13 by marsoare          #+#    #+#             */
/*   Updated: 2024/04/28 16:16:33 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

# define TRUE 1
# define FALSE 0

typedef struct s_flags
{
	int	minus;
	int	plus;
	int	space;
	int	hash;
	int	zero;
	int	width;
	int	prec;
	int	point;
}	t_flags;

int		ft_printf(char *format, ...);
void	update_struct(t_flags *flags, char *str, int *pos);
int		print_format(t_flags *flags, char *str, int *pos, va_list args);
int		putcharf(t_flags *flags, int c);
int		putstrf(t_flags *flags, char *str);
int		putstr_width(int width, char *str, int minus);

#endif
