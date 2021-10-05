/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_upper_case_hexadecimal_format.c                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elraira- <elraira-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/29 22:00:22 by elraira-          #+#    #+#             */
/*   Updated: 2021/10/05 14:03:10 by elraira-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_upper_case_hexadecimal_format(unsigned int value)
{
	int		i;
	char	*str;

	str = ft_itoa_base(value, HEXADECIMAL_U_BASE);
	i = ft_string_format(str);
	free(str);
	return (i);
}
