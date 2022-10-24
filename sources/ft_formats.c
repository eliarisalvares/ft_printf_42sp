/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_formats.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 22:00:22 by elraira-          #+#    #+#             */
/*   Updated: 2022/10/24 11:35:23 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief This function receives a format character and returns the
 * corresponding function to be used to print the argument.
 */

int	ft_formats(int c, va_list args)
{
	int	i;

	i = 0;
	if (c == 'c')
		i = ft_char_format(va_arg(args, int));
	else if (c == 's')
		i = ft_string_format(va_arg(args, char *));
	else if (c == 'p')
		i = ft_pointer_format(va_arg(args, void *));
	else if (c == 'i' || c == 'd')
		i = ft_decimal_format(va_arg(args, int));
	else if (c == 'u')
		i = ft_unsigned_decimal_format(va_arg(args, unsigned long));
	else if (c == 'x')
		i = ft_hexadecimal_format(va_arg(args, unsigned long));
	else if (c == 'X')
		i = ft_upper_case_hexadecimal_format(va_arg(args, unsigned long));
	else if (c == '%')
		i = ft_percent_format(c);
	return (i);
}
