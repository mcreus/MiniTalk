/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unsigned_int.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:40:17 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:40:19 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_unsigned_int(unsigned int nb)
{
	int	i;

	i = 0;
	if (nb < 10)
		i += ft_print_char (nb + 48);
	else
	{
		i += ft_print_num (nb / 10);
		i += ft_print_num (nb % 10);
	}
	return (i);
}
