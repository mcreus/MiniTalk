/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:17:23 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/17 12:25:20 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void	signal_handler(int signal)
{
	if (signal == SIGUSR1)
		ft_printf("Ok\n Server have received the message\n");
}

void	client_to_server(int pid, const char *str)
{
	int					bit;
	char				c;
	struct sigaction	sa;

	sa.sa_handler = &signal_handler;
	sigaction(SIGUSR1, &sa, NULL);
	while (*str)
	{
		bit = 8;
		c = *str++;
		while (bit--)
		{
			if (c >> bit & 1)
				kill(pid, SIGUSR2);
			else
				kill(pid, SIGUSR1);
			usleep(700);
		}
	}
	while (++bit < 8 && kill(pid, SIGUSR1) == 0)
		usleep(700);
}

int	main(int ac, char **av)
{
	char const	*str;
	int			pid;

	if (ac != 3)
	{
		ft_printf("Error\n ./client PID Message\n");
		return (0);
	}
	pid = ft_atoi(av[1]);
	if (!pid)
	{
		ft_printf("Error\n Invalid pid\n");
		return (0);
	}
	str = av[2];
	client_to_server(pid, str);
	return (0);
}
