/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexadecimal_format.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 22:00:22 by elraira-          #+#    #+#             */
/*   Updated: 2022/10/24 11:35:23 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

/**
 * @brief This function outputs a hexadecimal number using a itoa function that
 * takes a base as a parameter. All the alphabetic characters are in the range
 * a-f.
 */

int	ft_hexadecimal_format(unsigned int value)
{
	int		i;
	char	*str;

	str = ft_itoa_base(value, "0123456789abcdef");
	i = ft_string_format(str);
	free(str);
	return (i);
}
