/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:38:49 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:38:51 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	print_and_count(va_list args, char character)
{
	int	i;

	i = 0;
	if (character == 'c')
		i = ft_print_char(va_arg(args, int));
	else if (character == 's')
		i = ft_print_str(va_arg(args, char *));
	else if (character == 'i' || character == 'd')
		i = ft_print_num(va_arg(args, int));
	else if (character == 'u')
		i = ft_print_unsigned_int(va_arg(args, unsigned int));
	else if (character == 'x')
		i = ft_print_lower_hexa(va_arg(args, unsigned int));
	else if (character == 'X')
		i = ft_print_upper_hexa(va_arg(args, unsigned int));
	else if (character == '%')
		i = ft_print_char('%');
	else if (character == 'p')
		i = ft_address(va_arg(args, unsigned long));
	else
		return (0);
	return (i);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		bytes_in_str;
	int		i;

	i = 0;
	bytes_in_str = 0;
	va_start (args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			bytes_in_str += print_and_count (args, str[i + 1]);
			i += 2;
		}
		else
		{
			bytes_in_str += ft_print_char(str[i]);
			i++;
		}
	}
	va_end(args);
	return (bytes_in_str);
}
