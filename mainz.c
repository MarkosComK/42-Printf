/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mainz.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marsoare <marsoare@student.42porto.co      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/08 00:18:08 by marsoare          #+#    #+#             */
/*   Updated: 2024/05/08 00:40:05 by marsoare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int	main(void)
{
	int	str3 = 0;
	int	str4 = -0;
	printf("TESTING ZERO WITH FLAG\n");
	int	len5 = ft_printf("[% 10.5d]\n", str3);
	int	len6 = printf("[% 10.5d]\n", str3);
	printf("%i\n", len5);
	printf("%i\n", len6);
	printf("TESTING -ZERO NUMBERS WITH - FLAG\n");
	int	len7 = ft_printf("[%- 10.5d]\n", str4);
	int	len8 = printf("[%- 10.5d]\n", str4);
	return (0);
}

