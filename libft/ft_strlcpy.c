/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:43:20 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:43:22 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*With the strlcpy() function,only dstsize characters maximum
 are copied, and the value returned is the size of string src. 
 (The value returned is always the size of string src 
 regardless of how many characters are copied.)
 No segundo test copies 5 characters (4 plus the null character)
 Copy src to string dst of size.
At most size-1 characters will be copied.
Always NUL terminates*/

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while (src[i] && i < (size - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = 0;
	}
	while (src[i])
		i++;
	return (i);
}

/*#include <stdio.h>
int	main()
{
	char src[] = "Rafael";
	char dest[] = "Bruno";
	printf("%d\n", ft_strlcpy(dest, src, 5));
	printf("%s\n", dest);
}*/
