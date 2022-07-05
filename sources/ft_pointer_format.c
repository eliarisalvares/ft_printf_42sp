/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:47:38 by elraira-          #+#    #+#             */
/*   Updated: 2022/07/04 23:01:56 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

/**
 * @brief This function outputs the prefix needed by the pointer format.
 */
static int	ft_print_prefix(char *str)
{
	int	i;

	i = ft_string_format(str);
	return (i);
}

/**
 * @brief The printf pointer format will output a pointer's address in
 * hexadecimal. The address will be prefixed by 0x. The string will be converted
 * to a hexadecimal format using the ft_itoa_base function that takes a base as
 * a parameter.
 */
int	ft_pointer_format(void *ptr_address)
{
	int				i;
	char			*str;
	unsigned long	address;

	address = (unsigned long)ptr_address;
	i = ft_print_prefix("0x");
	str = ft_itoa_base(address, HEXADECIMAL_L_BASE);
	i += ft_string_format(str);
	free(str);
	return (i);
}
