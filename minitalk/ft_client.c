/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_client.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mgiovana <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 14:24:11 by mgiovana          #+#    #+#             */
/*   Updated: 2023/02/06 13:03:30 by mgiovana         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minitalk.h"

void	ft_send_bit(unsigned int len, int s_pid, int bit)
{
	int	i;

	i = 0;
	while (i < bit)
	{
		if (len % 2 == 1)
			kill(s_pid, SIGUSR1);
		if (len % 2 == 0)
			kill(s_pid, SIGUSR2);
		if (len)
			len /= 2;
		i++;
		usleep(60);
	}
}

void	ft_ok(int sig)
{
	(void)sig;
	ft_printf("Messaggio Arrivato Senza Problemi\n");
	exit(0);
}

int	main(int argc, char **argv)
{
	int	s_pid;
	int	c_pid;
	int	i;

	i = 0;
	if (argc != 3)
	{
		ft_printf("Numero argomenti errato\n");
		return (0);
	}
	signal(SIGUSR1, ft_ok);
	s_pid = ft_atoi(argv[1]);
	c_pid = getpid();
	ft_send_bit(c_pid, s_pid, 32);
	while (argv[2][i])
	{
		ft_send_bit(argv[2][i], s_pid, 8);
		i++;
	}
	ft_send_bit(0, s_pid, 8);
	pause();
	return (0);
}
