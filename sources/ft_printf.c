/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:02:53 by elraira-          #+#    #+#             */
/*   Updated: 2021/10/05 17:28:14 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_input_parser(const char *str, va_list args)
{
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	while (str[pos])
	{
		if (str[pos] != '%')
			i += ft_putchar_fd(str[pos], 1);
		else if ((str[pos] == '%') && str[pos + 1])
		{
			pos++;
			if (ft_is_argument(str[pos]))
				i += ft_formats(str[pos], args);
			else if (str[pos])
				i += ft_putchar_fd(str[pos], 1);
		}
		pos++;
	}
	return (i);
}

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
