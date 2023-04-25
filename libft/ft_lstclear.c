/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/24 17:10:00 by dojeanno          #+#    #+#             */
/*   Updated: 2023/03/24 17:33:24 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*hold;
	t_list	*ptr;

	ptr = *lst;
	while (ptr != NULL)
	{
		hold = ptr->next;
		ft_lstdelone(ptr, del);
		ptr = hold;
	}
	*lst = NULL;
}
