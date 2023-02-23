/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printhexa1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 12:08:19 by mgiovana          #+#    #+#             */
/*   Updated: 2023/02/03 15:24:01 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printhexa1(unsigned int n, char baseform)
{
	char			*s;
	unsigned long	a;

	a = n;
	if (baseform == 'x')
		s = "0123456789abcdef";
	else if (baseform == 'X')
		s = "0123456789ABCDEF";
	else
		return (0);
	if (a == 0)
		return (write (1, "0", 1));
	if (n >= 16)
		ft_printhexa1 (a / 16, baseform);
	write (1, &s[(int)(a % 16)], 1);
	return (ft_counthex(n));
}
