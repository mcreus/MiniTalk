/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:34:20 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:34:22 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst: The node to free.
del: The address of the function used to delete
the content.
Takes as a parameter a node and frees the memory of
the node’s content using the function ’del’ given
as a parameter and free the node. The memory of
’next’ must not be freed.*/

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (lst != NULL && del != NULL)
	{
		del(lst->content);
		free(lst);
	}
}

/*void	ft_delete(void* content)
{
	free(content);
}
int	main(void)
{
	ft_lstdelone(lst, &ft_delete);
}*/
