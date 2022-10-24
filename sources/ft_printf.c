/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:02:53 by elraira-          #+#    #+#             */
/*   Updated: 2022/10/24 11:35:23 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief This is the main function of the ft_printf library. As the printf
 * function takes a variable number of arguments, va_start and va_end are used
 * to enable access to the arguments and to end it, respectively. In between,
 * the ft_input_parser function is called to parse the input string.
 *
 * @param fmt this is the string that contains the text to be written to stdout.
 *  It can optionally contain embedded format tags and flages that are replaced
 * by the values specified in subsequent additional arguments and formatted as
 * requested.
 * @param ... the ellipsis denotes an unspecified number of additional
 * arguments.
 */

int	ft_printf(const char *fmt, ...)
{
	va_list		args;
	const char	*str;
	int			i;

	i = 0;
	str = ft_strdup(fmt);
	if (!str)
		return (0);
	va_start(args, fmt);
	i += ft_input_parser(str, args);
	va_end(args);
	free((void *)str);
	return (i);
}
