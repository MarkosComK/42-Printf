/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:16:13 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/01 13:38:24 by marsoare         ###   ########.fr       */
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
	int	align_left;
	int	plus;
	int	space;
	int	hash;
	int	zero;
	int	width;
	int	precision;
	int	point;
}	t_flags;

int		ft_printf(char *format, ...);
void	update_struct(t_flags *flags, char *str, int *pos);
int		print_format(t_flags *flags, char *str, int *pos, va_list args);
int		putcharf(t_flags *flags, int c);
int		putstrf(t_flags *flags, char *str);
int		putstr_width(int width, char *str, int align_left);
int		putstr_precision(int precision, char *str);
int		putboth(int width, int precision, char *str, int align_left);
int		print_ptr(t_flags *flags, int number);
int		print_ptr_spaces(int spaces, int align_left, int number);
int		print_ptr_hex(int number, char x);
int		ptr_len(int number);
int		print_decimal(t_flags *flags, int number);
int		print_decimal_left(long number, int width, int prec, char sign);
int		print_unsigned_dec(unsigned int number);
int		print_decimal_prec(unsigned int number, int prec, char sign);
int		numlen(unsigned int number);

#endif
