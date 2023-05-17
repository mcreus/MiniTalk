/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:30:53 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:30:59 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*The bzero() function erases the data in the n bytes of the memory
starting at the location pointed to by s, by writing zeros (bytes
containing '\0') to that area.
A função bzero() apaga os dados nos n bytes do início da memória
 no local apontado por s, escrevendo zeros = NULL Character 
 (bytes contendo '\0') naquela área.*/
void	ft_bzero(void *s, size_t n)
{
	size_t			i;
	unsigned char	*string;

	string = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		string[i] = 0;
		i++;
	}
}

/*#include <stdio.h>
int main( void )
{
	
	char str[] = "RafaelVieira";
	
	ft_bzero(str + 3, 1);
	
	printf("%s\n", str);
	return (0);
}*/
