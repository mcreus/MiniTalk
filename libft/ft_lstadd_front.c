/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcreus <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 12:33:37 by mcreus            #+#    #+#             */
/*   Updated: 2023/04/27 12:33:39 by mcreus           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*lst: The address of a pointer to the first link of
a list.
new: The address of a pointer to the node to be
added to the list*/

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new != NULL)
	{
		new -> next = *lst;
		*lst = new;
	}
}

/*int	main(void)
{
	t_list *new,*lst1;
	new = ft_lstnew("fabio");
	lst1 = ft_lstnew("fabio");
	ft_lstadd_front(&lst1, new);
}*/
