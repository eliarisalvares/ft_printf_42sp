/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_case_hexadecimal_format.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 22:00:22 by elraira-          #+#    #+#             */
/*   Updated: 2022/07/04 23:05:24 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief This function outputs a upper case hexadecimal number using a itoa
 * function that takes a base 16 as a parameter. HEXADECIMAL_U_BASE is defined
 * in ft_printf.h and all the alphabetic characters are in the range A-F.
 */

int	ft_upper_case_hexadecimal_format(unsigned int value)
{
	int		i;
	char	*str;

	str = ft_itoa_base(value, HEXADECIMAL_U_BASE);
	i = ft_string_format(str);
	free(str);
	return (i);
}
