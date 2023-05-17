/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_num.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:39:32 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:39:34 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_num(long nb)
{
	int	i;

	i = 0;
	if (nb < 0)
	{
		nb *= -1;
		i += ft_print_char ('-');
	}
	if (nb < 10)
		i += ft_print_char (nb + 48);
	else
	{
		i += ft_print_num (nb / 10);
		i += ft_print_num (nb % 10);
	}
	return (i);
}
