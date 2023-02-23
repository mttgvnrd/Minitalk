/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_server.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 13:09:58 by mgiovana          #+#    #+#             */
/*   Updated: 2023/02/06 14:03:25 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_get_sig(int sig, int *c_pid, int *i)
{
	static int	bit;
	static int	n;

	if (bit < 7)
	{
		n += (sig == SIGUSR1) << bit;
		bit ++;
	}
	else
	{
		n += (sig == SIGUSR1) << bit;
		if (n)
			write (1, &n, 1);
		else
		{
			kill(*c_pid, SIGUSR1);
			*c_pid = 0;
			*i = 0;
		}
		bit = 0;
		n = 0;
	}
}

void	ft_sig(int sig)
{
	static int	i;
	static int	c_pid;

	if (i > 32 - 1)
		ft_get_sig(sig, &c_pid, &i);
	else
	{
		c_pid += (sig == SIGUSR1) << i;
		i++;
	}
}

int	main(void)
{
	ft_printf("Server PID: %u\n", getpid());
	while (1)
	{
		signal(SIGUSR1, ft_sig);
		signal(SIGUSR2, ft_sig);
	}
	return (0);
}
