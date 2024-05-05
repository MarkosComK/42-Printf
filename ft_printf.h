/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/27 15:16:13 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/05 11:41:40 by marsoare         ###   ########.fr       */
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
int		print_decimal(t_flags *flags, long number);
int		print_decimal_left(long number, int width, int prec, char sign);
int		print_unsigned_dec(long number);
int		print_decimal_prec(long number, int prec, char sign);
int		print_dec_wz(long number, int prec);
int		numlen(long number);
int		print_dec_wp(long number, int width, int prec, char sign);
int		print_dec_wp2(long number, int width, int prec, char sign);
int		print_hexa(t_flags *flags, long number, char x);
int		print_hexa_left(t_flags *flags, long number, char x);
int		print_hexa_prec(int prec, long number, char x);

#endif
