/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_unsigned_nbr_fd.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:45:30 by mgiovana          #+#    #+#             */
/*   Updated: 2022/11/08 12:45:49 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_put_unsigned_nbr_fd(unsigned int n, int fd)
{
	unsigned long int		i;

	i = n;
	if (i > 9)
		ft_put_unsigned_nbr_fd(i / 10, fd);
	ft_putchar_fd(i % 10 + 48, fd);
}
