/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printvoidptr.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:28:51 by mgiovana          #+#    #+#             */
/*   Updated: 2022/10/28 12:51:29 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printvoidptr(unsigned long n)
{
	int	len;

	len = 0;
	if ((void *)n == NULL)
		return (write(1, "(nil)", 5));
	len += write(1, "0x", 2);
	ft_print_hex(n);
	len += ft_counthex(n);
	return (len);
}
