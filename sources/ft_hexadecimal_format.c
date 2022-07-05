/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_format.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 22:00:22 by elraira-          #+#    #+#             */
/*   Updated: 2022/07/04 23:05:54 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief This function outputs a hexadecimal number using a itoa function that
 * takes a base as a parameter. HEXADECIMAL_L_BASE is defined in ft_printf.h
 *  and all the alphabetic characters are in the range a-f.
 */

int	ft_hexadecimal_format(unsigned int value)
{
	int		i;
	char	*str;

	str = ft_itoa_base(value, HEXADECIMAL_L_BASE);
	i = ft_string_format(str);
	free(str);
	return (i);
}
