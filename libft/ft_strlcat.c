/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dojeanno <dojeanno@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/24 16:03:54 by dojeanno          #+#    #+#             */
/*   Updated: 2023/03/22 16:41:43 by dojeanno         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	size_t	srcl;
	size_t	dstl;

	if (!dst || !src)
		return (0);
	dstl = ft_strlen(dst);
	srcl = ft_strlen(src);
	if (dstsize == 0)
		return (srcl);
	j = 0;
	i = dstl;
	if (dstsize < dstl)
		return (dstsize + srcl);
	while (src[j] && i < (dstsize - 1))
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (srcl + dstl);
}
