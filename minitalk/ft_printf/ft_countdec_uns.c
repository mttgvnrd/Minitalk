/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_countdec_uns.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 12:43:56 by mgiovana          #+#    #+#             */
/*   Updated: 2022/11/08 12:44:29 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_countdec_uns(unsigned int n)
{
	int					i;
	unsigned long int	g;

	g = n;
	if (g == 0)
		return (1);
	i = 0;
	while (g > 0)
	{
		i++;
		g = g / 10;
	}
	return (i);
}
