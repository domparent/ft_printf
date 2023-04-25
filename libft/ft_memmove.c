/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 11:58:19 by dojeanno          #+#    #+#             */
/*   Updated: 2023/03/22 16:50:54 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*destination;
	char	*source;
	size_t	i;

	if (dst == NULL || src == NULL)
		return (NULL);
	i = 0;
	destination = (char *)dst;
	source = (char *)src;
	if (destination > source)
	{
		while (len-- > 0)
			destination[len] = source[len];
	}
	else
	{
		while (i < len)
		{
			destination[i] = source[i];
			i++;
		}
	}
	return (destination);
}
