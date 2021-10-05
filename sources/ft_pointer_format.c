/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer_format.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/03 18:47:38 by elraira-          #+#    #+#             */
/*   Updated: 2021/10/05 14:22:48 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_prefix(char *str)
{
	int	i;

	i = ft_string_format(str);
	return (i);
}

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
