/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/14 14:17:31 by mcreus            #+#    #+#             */
/*   Updated: 2023/05/17 12:02:40 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libft/libft.h"
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>

void	signal_handler(int signal, siginfo_t *info, void *context)
{
	static int	bit;
	static int	i;

	(void) context;
	if (signal == SIGUSR2)
	{
		i |= (0x80 >> bit);
	}
	bit++;
	if (bit == 8)
	{
		if (i == 0)
		{
			write (1, "\n", 1);
			kill(info->si_pid, SIGUSR1);
		}
		else
			ft_printf("%c", i);
		bit = 0;
		i = 0;
	}
}

int	main(void)
{
	struct sigaction	sa;

	sa.sa_flags = SA_SIGINFO;
	sa.sa_sigaction = &signal_handler;
	sigaction(SIGUSR1, &sa, NULL);
	sigaction(SIGUSR2, &sa, NULL);
	ft_printf("PID : %d\n", getpid());
	while (1)
		pause();
	return (0);
}
