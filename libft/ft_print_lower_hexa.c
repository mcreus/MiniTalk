/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_lower_hexa.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:39:11 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:39:12 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_print_lower_hexa(unsigned int nb)
{
	char	*hexa_num;
	int		count;

	count = 0;
	hexa_num = "0123456789abcdef";
	if (nb < 16)
		count += ft_print_char(hexa_num[nb]);
	if (nb >= 16)
	{
		count += ft_print_lower_hexa(nb / 16);
		count += ft_print_lower_hexa(nb % 16);
	}
	return (count);
}
