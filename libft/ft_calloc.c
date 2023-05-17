/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:31:13 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:31:15 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*The calloc() function shall allocate unused space for 
an array of nelem elements each of whose size 
in bytes is elsize.  The space shall be initialized to all bits 0
   A função aloca a memoria requerida e 
   retorna o ponteiro para o espaco alocado,
ou NULL se o requerimento falhar a 
diferença entre malloc() e calloc() 
e que malloc nao zera a memoria alocada*/

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}
