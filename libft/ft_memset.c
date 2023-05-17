/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:37:21 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:37:23 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The memset() function fills the first n bytes of the memory area
       pointed to by s with the constant byte c.
*/

#include "libft.h"

void	*ft_memset(void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)str)[i] = c;
		i++;
	}
	return (str);
}

/*int main () {
   char str[] = "This is string.h library function";

   ft_memset(str,'$',7);

   printf("%s\n", str);
   return(0);
}*/
