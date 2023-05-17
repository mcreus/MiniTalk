/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:44:06 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:44:08 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ** SYNOPSIS: create new string
 from modifying string with specified function
**
** DESCRIPTION:
** 		Applies the function ’f’ to each 
character of the string ’s’ to create
**	a new string (with malloc(3)) resulting 
from successive applications of ’f’. */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (!s)
		return (NULL);
	str = (char *) malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/* #include <stdio.h>

char my_func(unsigned int i, char c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
int main()
{
	char *str = "hello.";
	char *result = ft_strmapi(str, my_func);
	printf("%s", result);
	return (0);
} */
