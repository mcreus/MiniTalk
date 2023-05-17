/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:34:59 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:35:01 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst: The beginning of the list.
Returns the last node of the list*/

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (0);
	while (lst -> next != NULL)
	{
		lst = lst ->next;
	}
	return (lst);
}
