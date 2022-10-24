/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_parser.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/05 14:02:53 by elraira-          #+#    #+#             */
/*   Updated: 2022/10/24 11:35:23 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief This is the parser function. It parses the format string and calls the
 * corresponding function to output the formatted string after checking if the
 * "%" is present and followed by a valid format character.
 */
int	ft_input_parser(const char *str, va_list args)
{
	int	pos;
	int	i;

	pos = 0;
	i = 0;
	while (str[pos])
	{
		if (str[pos] != '%')
			i = i + ft_putchar_fd(str[pos], 1);
		else if ((str[pos] == '%') && str[pos + 1])
		{
			pos++;
			if (ft_is_argument(str[pos]))
				i = i + ft_formats(str[pos], args);
			else if (str[pos])
				i = i + ft_putchar_fd(str[pos], 1);
		}
		pos++;
	}
	return (i);
}
