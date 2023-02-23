/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printunsnbr.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 14:28:17 by mgiovana          #+#    #+#             */
/*   Updated: 2023/02/03 15:25:49 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printunsnbr(unsigned int n)
{
	ft_put_unsigned_nbr_fd(n, 1);
	return (ft_countdec_uns(n));
}
