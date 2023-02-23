/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 15:31:18 by mgiovana          #+#    #+#             */
/*   Updated: 2022/10/28 15:32:39 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_unsigned_int(unsigned int n)
{
	ft_put_unsigned_nbr_fd(n, 1);
	return (ft_count_unsigned_dec(n));
}
