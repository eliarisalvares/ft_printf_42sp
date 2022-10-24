/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_decimal_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:36:30 by elraira-          #+#    #+#             */
/*   Updated: 2022/10/24 11:35:23 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief A function to check if the number to be printed is negative is needed
 * to assure the correct output as the "-" needs to be printed before the
 * number. Also, as the absolute value of INT_MIN is greater than INT_MAX, this
 * must be treated separately.
 */

static int	ft_is_negative(int *value)
{
	int	i;

	i = 0;
	if (*value == INT_MIN)
	{
		i = 1;
		ft_putchar_fd('-', 1);
		ft_putchar_fd('2', 1);
		*value = 147483648;
		i++;
	}
	else if (*value < 0)
	{
		ft_putchar_fd('-', 1);
		*value *= -1;
		i++;
	}
	return (i);
}

/**
 * @brief This function will output a decimal number.
 */

int	ft_decimal_format(int value)
{
	int		i;
	char	*str;

	i = ft_is_negative(&value);
	str = ft_itoa_base(value, "0123456789");
	i = i + ft_string_format(str);
	free(str);
	return (i);
}
