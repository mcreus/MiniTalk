/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:36:43 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:36:45 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
       The memcpy() function copies n bytes from memory area src to
       memory area dest.  The memory areas must not overlap.  
       The memcpy() function returns a pointer to dest.
*/

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (!src && !dest)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dest)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
int main (void) 
{
  char src[] = "HELLO";
   ft_memcpy(src+1, src, 2);
  printf("After memcpy dest = %s\n", src);
   
  return(0);
}*/
